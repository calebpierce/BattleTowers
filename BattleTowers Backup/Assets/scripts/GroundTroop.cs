using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GroundTroop : Photon.PunBehaviour
{
    [SerializeField] private GameObject explosionEffect;
    [SerializeField] private float speed;
    private GameObject uiManager;
    public bool isEnemy;
    //we only want to sort enemies a few times per second since its resource intensive and we have to do it for every one of our troops, ie n^2*(whatever time complexity the sort itself is)
    private float updateEnemiesTimer;

    private Vector3 waypointTarget;
    private int waypointIndex;

    public float moveSpeed = .5f;
    public float rotationSpeed = 5;
    public float collisionRadius = 1.7f;
    private bool rotated;

    private float fireTimer;
    [SerializeField] private float fireRate;
    [SerializeField] private float fireRange;
    [SerializeField] private float stopAndShootRange;
    [SerializeField] private int health;

    [SerializeField] private GameObject bulletPrefab;
    [SerializeField] private GameObject hitEffectPrefab;
    
    private GameObject turret;
    private GameObject gun;

    private GameObject levelManager;


    private List<GameObject> sortedEnemyTroopsByDistance = new List<GameObject>();

    //array that stores all North waypoint objects
    private List<GameObject> nWPList = new List<GameObject>();
    //array that stores all Mid waypoint objects
    private List<GameObject> mWPList = new List<GameObject>();
    //array that stores all South waypoint objects
    private List<GameObject> sWPList = new List<GameObject>();
    //array that stores all selected track objects
    private List<GameObject> selectedWPList = null;//new List<GameObject>();
                                               

    private string track;

    private GameObject thisGameObject;
    //private float randOffset = Random.Range(-5f, 5f);    // Start is called before the first frame update
    void Start()
    {
        fireTimer = 0;
        updateEnemiesTimer = 0f;
        levelManager = GameObject.Find("GameManager");
        isEnemy = !gameObject.GetComponent<PhotonView>().isMine;
        rotated = false;
        track = null;
        waypointIndex = 1;
        uiManager = GameObject.Find("UIManager");

        //this pulls the master list of enemyTroops so that this troop can have a local copy to use and change
        if (levelManager.GetComponent<LevelManager>().enemyTroops.Count > 0)
            sortedEnemyTroopsByDistance = levelManager.GetComponent<LevelManager>().enemyTroops.GetRange(0, levelManager.GetComponent<LevelManager>().enemyTroops.Count);
        //^^we wanna sort this several times per second so we know which enemies are closest. 
        if (isEnemy) 
        {
            levelManager.GetComponent<LevelManager>().enemyTroops.Add(gameObject);
            sortedEnemyTroopsByDistance = levelManager.GetComponent<LevelManager>().enemyTroops.GetRange(0, levelManager.GetComponent<LevelManager>().enemyTroops.Count);
            //we want to add this object to the list enemies located in the levelManager. this list shoulnt be altered directly. make a copy of it if you want to sort it by distance for example
        }
        //if !gameObject.getComponent<BuildStats>().isEnemy   this way we arent controlling enemies
        //Debug.Log("isEnemy: " + gameObject.GetComponent<BuildStats>().isEnemy);
        if (isEnemy == false)
        {
            turret = gameObject.transform.GetChild(0).gameObject;
            gun = turret.transform.GetChild(0).gameObject;
            //Debug.Log("enemy");
            //fill arrays
            GameObject[] nWPListArray = GameObject.FindGameObjectsWithTag("northWaypoint");
            nWPList.AddRange(nWPListArray);
            GameObject[] mWPListArray = GameObject.FindGameObjectsWithTag("midWaypoint");
            mWPList.AddRange(mWPListArray);
            GameObject[] sWPListArray = GameObject.FindGameObjectsWithTag("southWaypoint");
            sWPList.AddRange(sWPListArray);

            thisGameObject = gameObject;
            //Debug.Log("why no get here");
            // Debug.Log("Array: " + selectedWPArray.ToString());
        }
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
            //if a track is selected and we havent loaded the waypoints into the troop then\/
            if (selectedWPList == null && uiManager.GetComponent<MainUIFunctions>().trackSelected != null)
            {
                // Debug.Log("test");
                //Debug.Log("track : " + uiManager.GetComponent<MainUIFunctions>().trackSelected);
                track = uiManager.GetComponent<MainUIFunctions>().trackSelected;
                Debug.Log(track);
                switch (track)
                {
                    case "north":
                        selectedWPList = new List<GameObject>(nWPList);
                        break;
                    case "mid":
                        selectedWPList = new List<GameObject>(mWPList);
                        break;
                    case "south":
                        selectedWPList = new List<GameObject>(sWPList);
                        break;
                    default:
                        break;
                }
                //sort the selected array by distance to wayponts

                selectedWPList.Sort(new DistanceComparer(thisGameObject.transform.position)); // Sort the list by distance
                //to make things easier, we want to change the list type to an arraylist. we just needed list type to do the sorting
                //selectedWPArray = new ArrayList(selectedWPList);

                //swap last two elements if north or south
                if (track == "north" || track == "south")
                {
                    GameObject temp = selectedWPList[selectedWPList.Count - 1];
                    selectedWPList[selectedWPList.Count - 1] = selectedWPList[selectedWPList.Count - 2];
                    selectedWPList[selectedWPList.Count - 2] = temp;
                }
                //waypointTarget.position = new Vector3(selectedWPList[waypointIndex].transform.position.x, selectedWPList[waypointIndex].transform.position.y, selectedWPList[waypointIndex].transform.position.z);
                waypointTarget = new Vector3(selectedWPList[waypointIndex].transform.position.x, selectedWPList[waypointIndex].transform.position.y, selectedWPList[waypointIndex].transform.position.z);

                Vector3 randomizedPosition = new Vector3(waypointTarget.x + Random.Range(-1f, 1f), waypointTarget.y, waypointTarget.z + Random.Range(-1f, 1f));
                waypointTarget = randomizedPosition;

                //waypointTarget.position = new Vector3(waypointTarget.position.x + Random.Range(-3f, 3f), waypointTarget.position.y, waypointTarget.position.z + Random.Range(-3f, 3f));
                
                //Transform newRandWaypointTarget = null;
                //newRandWaypointTarget.position = new Vector3(waypointTarget.position.x + Random.Range(-3f, 3f), waypointTarget.position.y, waypointTarget.position.z + Random.Range(-3f, 3f));
                Debug.Log("set waypoint as " + waypointTarget.x + ", " + waypointTarget.y + ", " + waypointTarget.z);
                //Random.seed = System.DateTime.Now.Millisecond;
                //waypointTarget.position.Set(waypointTarget.position.x + Random.Range(-3f, 3f), waypointTarget.position.y, waypointTarget.position.z + Random.Range(-3f, 3f));
                // Debug.Log("array[0]: " + selectedWPList[0].name);
            }
            //sets track

            //whenever we have a track
            if (track != null)
            {

                // if already at waypoint, set waypointTarget to next waypoint 
                if (Vector3.Distance(transform.position, waypointTarget) <= 4f)
                {

                    //Random.seed = System.DateTime.Now.Millisecond;
                    //waypointTarget.position = new Vector3(selectedWPList[waypointIndex].transform.position.x, selectedWPList[waypointIndex].transform.position.y, selectedWPList[waypointIndex].transform.position.z);
                    waypointIndex++;
                    waypointTarget = new Vector3(selectedWPList[waypointIndex].transform.position.x, selectedWPList[waypointIndex].transform.position.y, selectedWPList[waypointIndex].transform.position.z);

                    Vector3 randomizedPosition = new Vector3(waypointTarget.x + Random.Range(-1f, 1f), waypointTarget.y, waypointTarget.z + Random.Range(1f, 1f));
                    waypointTarget = randomizedPosition;
                    rotated = false;
                    //waypointTarget.position = new Vector3(waypointTarget.position.x + Random.Range(-5f, 5f), waypointTarget.position.y, waypointTarget.position.z + Random.Range(-5f, 5f));
                    Debug.Log("set waypoint as " + waypointTarget.x + ", " + waypointTarget.y + ", " + waypointTarget.z);

                }
                //move to waypoint if not within stopAndShootRange
                if (Vector3.Distance(transform.position, sortedEnemyTroopsByDistance[0].transform.position) > stopAndShootRange && sortedEnemyTroopsByDistance != null)
                {
                    dontClipMove();
                    //turret.transform.LookAt(sortedEnemyTroopsByDistance[0].transform);
                }
                turret.transform.LookAt(sortedEnemyTroopsByDistance[0].transform);
                turret.transform.eulerAngles = new Vector3(0f, turret.transform.eulerAngles.y, 0f);
                gun.transform.LookAt(sortedEnemyTroopsByDistance[0].transform);
                gun.transform.eulerAngles = new Vector3(gun.transform.eulerAngles.x, turret.transform.eulerAngles.y, turret.transform.eulerAngles.z);

            }

            if (Vector3.Distance(transform.position, sortedEnemyTroopsByDistance[0].transform.position) <= fireRange && sortedEnemyTroopsByDistance != null && fireTimer <= 0)
            {
                
                shootAtTarget(sortedEnemyTroopsByDistance[0].transform.position, true);
                CallShootAtTargetRemotely();
                fireTimer = fireRate;
            }
        }

        //if health<=0, destroy for both client and remote\

    }
    /*
    void MoveTowardsWaypoint(Vector3 waypointTarget, float speed)
    {
        Debug.Log("moving to waypoint: " + waypointTarget.x + ", " + waypointTarget.y + ", " + waypointTarget.z);
        float step = speed * Time.deltaTime;
        Vector3 direction = (waypointTarget - transform.position).normalized;
        Vector3 nextPos = transform.position + direction * step;
        transform.position = nextPos;
        // Calculate the direction to the next waypoint
        // Calculate the rotation needed to face the next waypoint
        Quaternion targetRotation = Quaternion.LookRotation(direction);

        // Smoothly rotate towards the target rotation
        float rotationSpeed = 200.0f; // Adjust this value to control the rotation speed
        transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
    }*/

    private void dontClipMove()
    {
        // Move towards the target waypoint
        float step = speed * Time.deltaTime;
        Vector3 direction = (waypointTarget - transform.position).normalized;
        Vector3 nextPos = transform.position + direction * step;
        transform.position = nextPos;
        transform.position = new Vector3(transform.position.x, 0f, transform.position.z);
        // Rotate towards the target waypoint

        if (rotated == false)
        {
            Vector3 targetDirection = waypointTarget - transform.position;
            Quaternion targetRotation = Quaternion.LookRotation(targetDirection);
            transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
            if (Vector3.Dot(transform.forward, (waypointTarget - transform.position).normalized) >= Mathf.Cos(1 * Mathf.Deg2Rad))
            {
                rotated = true;
            }
        }
        // Check for collisions with other ground troops unless its close to its waypoint, then just send it
        if (Vector3.Distance(transform.position, waypointTarget) >= 8)
        {
            Collider[] colliders = Physics.OverlapSphere(transform.position, collisionRadius);
            foreach (Collider collider in colliders)
            {
                if (collider.gameObject != gameObject && collider.CompareTag("troop"))
                {
                    // Calculate the direction to move away from the other troop
                    Vector3 separationDirection = (transform.position - collider.transform.position).normalized;
                    float separationDistance = collisionRadius / 100;
                    Vector3 separationOffset = separationDirection * separationDistance;


                    // Move the current troop away from the other troop
                    transform.Translate(separationOffset, Space.World);
                }

            }
        }
    }
    //this function should be called on both our client and the remote players. RPC?
    [PunRPC]
    private void shootAtTarget(Vector3 target, bool isCalledByMe)
    {
        //play gunshot sound
        //instantiate particle effect

        /*instantiate bullet prefab at tip of the turrets barrel and set the isMine variable on it to isCalledByMe, make it move to the target, assign it damage based on the tanks level*/
        Vector3 targetDirection = target - gameObject.transform.GetChild(0).transform.GetChild(0).transform.position;
        // calculate position to spawn bullet
        GameObject newBullet = Instantiate(bulletPrefab, gameObject.transform.GetChild(0).transform.GetChild(0).transform.position, Quaternion.LookRotation(targetDirection));
        //moves bullet to end of gun barrel
        newBullet.transform.position += newBullet.transform.rotation * Vector3.forward * 1.3f;
        newBullet.GetComponent<Bullet>().target = target;
        newBullet.GetComponent<Bullet>().isMine = isCalledByMe;
        newBullet.GetComponent <Bullet>().damage = 3;
        //TODO: change the damage of the bullet based on this tanks level
        Debug.Log("FIRED at Target" + "!   " + "is it my bullet: " + isCalledByMe.ToString());

    }
        void CallShootAtTargetRemotely()
    {
        PhotonView photonView = GetComponent<PhotonView>(); 
        photonView.RPC("shootAtTarget", PhotonTargets.Others, sortedEnemyTroopsByDistance[0].transform.position, false);
    }
    [PunRPC]
    private void takeDamage(int d/*, Vector3 pos, Quaternion rot*/)
    {
        Debug.Log(d + "damage Taken");
        health -= d;
        /*
        GameObject particleEffect = Instantiate(hitEffectPrefab, pos, rot);
        particleEffect.transform.Translate(0, 0, .3f);
        particleEffect.transform.Rotate(Vector3.up, 180f);
        */
        if (health <= 0)
        {
            //TODO: play fancy effect
            Instantiate(explosionEffect, gameObject.transform.position, Quaternion.identity);
            levelManager.GetComponent<LevelManager>().enemyTroops.Remove(gameObject);
            //destroy via photon\
            PhotonNetwork.Destroy(photonView);
            //GameObject.Destroy(gameObject);
        }
    }
}
public class DistanceComparer : IComparer<GameObject>
{
    private Vector3 targetPosition; // The position of the target game object

    public DistanceComparer(Vector3 targetPosition)
    {
        this.targetPosition = targetPosition;
    }

    public int Compare(GameObject a, GameObject b)
    {
        float distanceA = Vector3.Distance(a.transform.position, targetPosition);
        float distanceB = Vector3.Distance(b.transform.position, targetPosition);

        return distanceA.CompareTo(distanceB);
    }
}