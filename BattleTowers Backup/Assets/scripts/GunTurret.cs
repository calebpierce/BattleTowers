using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GunTurret : Photon.PunBehaviour
{
    
    public bool isEnemy;
    //we only want to sort enemies a few times per second since its resource intensive and we have to do it for every one of our troops, ie n^2*(whatever time complexity the sort itself is)
    private float updateEnemiesTimer;

    public float rotationSpeed = 5;

    private float fireTimer;
    [SerializeField] private float fireRate;
    [SerializeField] private float fireRange;
    [SerializeField] private int health;

    [SerializeField] private GameObject bulletPrefab;
    [SerializeField] private GameObject hitEffectPrefab;

    private GameObject turretBase;
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
            turretBase = gameObject.transform.GetChild(0).gameObject;
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
            turretTop.transform.LookAt(sortedEnemyTroopsByDistance[0].transform);
            Quaternion rotation = Quaternion.Euler(-90f, turretTop.transform.eulerAngles.y +90f, 0f);
            turretTop.transform.rotation = rotation;

            if (Vector3.Distance(transform.position, sortedEnemyTroopsByDistance[0].transform.position) <= fireRange && sortedEnemyTroopsByDistance != null && fireTimer <= 0)
            {

                shootAtTargetv2(sortedEnemyTroopsByDistance[0].transform.position, true);
                CallShootAtTargetRemotely();
                fireTimer = fireRate;
            }
        }
    }

    //this function should be called on both our client and the remote players. RPC?
    [PunRPC]
    private void shootAtTargetv2(Vector3 target, bool isCalledByMe)
    {
        // Calculate the direction to the target
        Vector3 targetDirection = target - turretTop.transform.position;
        Vector3 tipOfBarrel = new Vector3(turretTop.transform.position.x, turretTop.transform.position.y +1.15f, turretTop.transform.position.z);
        // Instantiate the bullet at the tip of 'turretTop' and orient it towards the target
        GameObject newBullet = Instantiate(bulletPrefab, tipOfBarrel, Quaternion.LookRotation(targetDirection));

        // Moves bullet to end of gun barrel
        newBullet.transform.position += newBullet.transform.forward * 1.3f;

        // Set bullet properties
        Bullet bulletComponent = newBullet.GetComponent<Bullet>();
        if (bulletComponent != null)
        {
            bulletComponent.target = target;
            bulletComponent.isMine = isCalledByMe;
            bulletComponent.damage = 1;
            // TODO: Set the damage for the bullet
        }

        // TODO: Add sound effects or other visual effects for shooting
    }
    void CallShootAtTargetRemotely()
    {
        PhotonView photonView = GetComponent<PhotonView>();
        Debug.Log("SHOOTING REMOTLEY");
        photonView.RPC("shootAtTargetv2", PhotonTargets.Others, sortedEnemyTroopsByDistance[0].transform.position, false);
    }
}
