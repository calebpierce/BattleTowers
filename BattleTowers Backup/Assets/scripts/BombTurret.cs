using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class BombTurret : Photon.PunBehaviour
{

    public bool isEnemy;
    //we only want to sort enemies a few times per second since its resource intensive and we have to do it for every one of our troops, ie n^2*(whatever time complexity the sort itself is)
    private float updateEnemiesTimer;

    public float rotationSpeed = 5;

    private float fireTimer;
    [SerializeField] private float fireRate;
    [SerializeField] private float fireRange;
    [SerializeField] private int health;

    [SerializeField] private GameObject bombPrefab;
    [SerializeField] private GameObject hitEffectPrefab;

    //private GameObject turretBase;
    private GameObject turretTop;

    private GameObject levelManager;


    private List<GameObject> sortedEnemyTroopsByDistance = new List<GameObject>();


    //private float randOffset = Random.Range(-5f, 5f);    // Start is called before the first frame update
    void Start()
    {
        fireTimer = 0;
        updateEnemiesTimer = 0f;
        levelManager = GameObject.Find("GameManager");
        isEnemy = !gameObject.GetComponent<PhotonView>().isMine;


        //this pulls the master list of enemyTroops so that this troop can have a local copy to use and change
        if (levelManager.GetComponent<LevelManager>().enemyTroops.Count > 0)
            sortedEnemyTroopsByDistance = levelManager.GetComponent<LevelManager>().enemyTroops.GetRange(0, levelManager.GetComponent<LevelManager>().enemyTroops.Count);
        //^^we wanna sort this several times per second so we know which enemies are closest. 
        //if !gameObject.getComponent<BuildStats>().isEnemy   this way we arent controlling enemies
        //Debug.Log("isEnemy: " + gameObject.GetComponent<BuildStats>().isEnemy);
        //if (isEnemy == false)
        //{
        //turretBase = gameObject.transform.GetChild(0).gameObject;
        turretTop = gameObject.transform.GetChild(1).gameObject;
        //Debug.Log("enemy");
        //Debug.Log("why no get here");
        // Debug.Log("Array: " + selectedWPArray.ToString());
        //}
    }

    // Update is called once per frame
    void Update()
    {
        //decrement timer

        //everything we do in here should only be happening on our side
        if (isEnemy == false)//   this way we arent controlling enemies
        {
            updateEnemiesTimer -= Time.deltaTime;
            fireTimer -= Time.deltaTime;
            if (updateEnemiesTimer <= 0)
            {
                /*sort the enemyTroops array by their distance*/
                sortedEnemyTroopsByDistance = levelManager.GetComponent<LevelManager>().enemyTroops.GetRange(0, levelManager.GetComponent<LevelManager>().enemyTroops.Count);
                sortedEnemyTroopsByDistance.Sort(new DistanceComparer(transform.position));
                updateEnemiesTimer = .1f;
            }
            

            // Calculate the distance from the turret to this enemy
            float distanceToTarget = Vector3.Distance(turretTop.transform.position, sortedEnemyTroopsByDistance[0].transform.position);

            // Create an offset target position that is 'distanceToTarget' units above the enemy
            Vector3 offsetTarget = new Vector3(sortedEnemyTroopsByDistance[0].transform.position.x, sortedEnemyTroopsByDistance[0].transform.position.y + distanceToTarget/3, sortedEnemyTroopsByDistance[0].transform.position.z );

            // Make the turret top look at the offset target
            turretTop.transform.LookAt(offsetTarget);

            // Adjust the rotation to keep the turret's up direction aligned and fix the tilt
            Quaternion rotation = Quaternion.Euler(turretTop.transform.eulerAngles.x - 90f, turretTop.transform.eulerAngles.y, turretTop.transform.eulerAngles.z);
            turretTop.transform.rotation = rotation;

            if (Vector3.Distance(transform.position, sortedEnemyTroopsByDistance[0].transform.position) <= fireRange && sortedEnemyTroopsByDistance != null && fireTimer <= 0 && this.GetComponent<BuildStats>().isActivated)
            {

                shootAtTargetv2(sortedEnemyTroopsByDistance[0].GetComponent<PhotonView>().viewID, true);
                CallShootAtTargetRemotely();
                fireTimer = fireRate;
            }
        }
    }

    //this function should be called on both our client and the remote players. RPC?
    [PunRPC]
    private void shootAtTargetv2(int targID, bool isCalledByMe)
    {
        PhotonView targetPhotonView = PhotonView.Find(targID);
        Vector3 target = targetPhotonView.gameObject.transform.position;
        // Calculate the direction to the target
        Vector3 targetDirection = target - turretTop.transform.position;
        Vector3 tipOfBarrel = new Vector3(turretTop.transform.position.x, turretTop.transform.position.y + 1, turretTop.transform.position.z);
        // Instantiate the bullet at the tip of 'turretTop' and orient it towards the target
        Quaternion rotation = Quaternion.LookRotation(targetDirection);
        rotation = Quaternion.Euler(this.transform.eulerAngles.x - 90f, this.transform.eulerAngles.y, this.transform.eulerAngles.z);
        GameObject newBomb = Instantiate(bombPrefab, tipOfBarrel, rotation);

        // Moves bullet to end of gun barrel
        //newBomb.transform.position += newBomb.transform.forward * 1.3f;

        // Set bullet properties
        Bomb bombComponent = newBomb.GetComponent<Bomb>();
        if (bombComponent != null)
        {
            bombComponent.targID = targID;
            bombComponent.isMine = isCalledByMe;
            bombComponent.damage = 10;
            bombComponent.turretPhotonView = this.GetComponent<PhotonView>();
            
            // TODO: Set the damage for the bullet
        }

        // TODO: Add sound effects or other visual effects for shooting
    }
    void CallShootAtTargetRemotely()
    {
        PhotonView photonView = GetComponent<PhotonView>();
        Debug.Log("SHOOTING REMOTLEY");
        photonView.RPC("shootAtTargetv2", PhotonTargets.Others, sortedEnemyTroopsByDistance[0].GetComponent<PhotonView>().viewID, false);
    }

}
