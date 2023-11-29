using System.Collections.Generic;
using UnityEngine;

public class BuildingManager : MonoBehaviour
{
    public GameObject buildingSelected = null;
    [SerializeField] GameObject buildingPreview = null;
    [SerializeField] GameObject uiManager;
    public int buildingCost = 5;
    Vector3 target;
    Vector2 mousePos;
    bool preview = true;
    bool isBuildingSelected = false;
    public bool isSelectUp = false;
    public GameObject levelManager;
    private List<GameObject> restrictedObjects;
    private float checkCounter;
    // Start is called before the first frame update
    void Start()
    {
        restrictedObjects = new List<GameObject>();
        checkCounter = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (buildingSelected != null)
        {
            if (buildingSelected.tag != "troop")
            {
                if (isBuildingSelected && (Input.GetKeyDown(KeyCode.Escape) || Input.GetKeyDown(KeyCode.Tab) || Input.GetMouseButton(1)) && isSelectUp == false)
                {
                    Destroy(buildingPreview);
                    buildingSelected = null;
                    buildingPreview = null;
                    isBuildingSelected = false;
                    preview = true;
                }
                if (buildingSelected != null)
                {
                    isBuildingSelected = true;
                }
                if (buildingSelected != null && preview == true && isSelectUp == false)
                {
                    setTarget();
                    buildingPreview = Instantiate(buildingSelected, target, new Quaternion(0, 0, 0, 0));
                    buildingPreview.GetComponent<BuildStats>().isActivated = false;


                    //make it so building is inactive, but can still be seen   ie. just the model w/o script. make sure no collider on preview
                    //make it green if you can afford, red if you cannot
                    preview = false;
                }
                if (isBuildingSelected && isSelectUp == false)
                {
                    setTarget();
                    buildingPreview.transform.position = target;
                    GameObject thisPlayerBase = null;
                    GameObject enemyPlayerBase = null;

                    GameObject[] PlayerBases = GameObject.FindGameObjectsWithTag("base");
                    foreach (GameObject PlayerBase in PlayerBases)
                    {
                        if (levelManager.GetComponent<LevelManager>().enemyTroops.Contains(PlayerBase))
                        {
                            enemyPlayerBase = PlayerBase;
                        }
                        else
                        {
                            thisPlayerBase = PlayerBase;
                        }
                    }
                    if (checkCounter <= 0)
                    {
                        restrictedObjects.Clear();
                        restrictedObjects.AddRange(GameObject.FindGameObjectsWithTag("turret"));
                        restrictedObjects.AddRange(GameObject.FindGameObjectsWithTag("base"));
                        restrictedObjects.AddRange(GameObject.FindGameObjectsWithTag("DontPlace"));
                        if (restrictedObjects.Contains(buildingPreview))
                        {
                            restrictedObjects.Remove(buildingPreview);
                        }
                        checkCounter = .07f;
                    }
                    checkCounter -= Time.deltaTime;
                    float distanceToPlayerBase = Vector3.Distance(buildingPreview.transform.position, thisPlayerBase.transform.position);
                    float distanceToOtherPlayerBase = Vector3.Distance(buildingPreview.transform.position, enemyPlayerBase.transform.position);
                    if (Input.GetMouseButtonDown(0) && (uiManager.GetComponent<MainUIFunctions>().coins >= buildingSelected.GetComponent<BuildStats>().cost) && (distanceToPlayerBase < distanceToOtherPlayerBase - 4) && (IsTooCloseToRestrictedObjects(buildingPreview)))
                    {
                        uiManager.GetComponent<MainUIFunctions>().coins -= buildingSelected.GetComponent<BuildStats>().cost;
                        GameObject placedBuilding = PhotonNetwork.Instantiate(buildingSelected.name, buildingPreview.transform.position, new Quaternion(0, 0, 0, 0), 0);
                        //PhotonNetwork.Instantiate(buildingSelected.name, buildingPreview.transform.position, new Quaternion(0, 0, 0, 0), 0);
                        placedBuilding.GetComponent<BuildStats>().isActivated = true;
                        this.GetComponent<BuildingManager>().restrictedObjects.Add(placedBuilding);
                        Destroy(buildingPreview);
                        buildingSelected = null;
                        buildingPreview = null;
                        isBuildingSelected = false;
                        preview = true;

                        // Debug.Log("cost : " + buildingSelected.GetComponent<BuildStats>().cost.ToString());
                        //set a friend or fo variable on the building
                    }
                }
                void setTarget()
                {
                    Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                    RaycastHit hitInfo;
                    if (Physics.Raycast(ray, out hitInfo))
                        target = hitInfo.point;
                    target.x = Mathf.RoundToInt(target.x);
                    target.z = Mathf.RoundToInt(target.z);
                }
            }
            else if (buildingSelected.tag == "troop")
            {
                if (PhotonNetwork.isMasterClient)
                {
                    if ((uiManager.GetComponent<MainUIFunctions>().coins >= buildingSelected.GetComponent<BuildStats>().cost))
                    {
                        //Debug.Log("instantiate starter base");
                        GameObject placedTroop = PhotonNetwork.Instantiate(buildingSelected.name, new Vector3(0 + Random.Range(-5, 5), -2f, -70 + Random.Range(-5, 5)), new Quaternion(0, 0, 0, 0), 0);
                        uiManager.GetComponent<MainUIFunctions>().coins -= buildingSelected.GetComponent<BuildStats>().cost;
                        placedTroop.GetComponent<BuildStats>().isActivated = true;
                        buildingSelected = null;

                    }
                }
                else
                {
                    if (Input.GetMouseButtonDown(0) && (uiManager.GetComponent<MainUIFunctions>().coins >= buildingSelected.GetComponent<BuildStats>().cost))
                    {
                        GameObject placedTroop = PhotonNetwork.Instantiate(buildingSelected.name, new Vector3(0 + Random.Range(-5, 5), -2f, 70 + Random.Range(-5, 5)), new Quaternion(0, 90, 0, 0), 0);
                        uiManager.GetComponent<MainUIFunctions>().coins -= buildingSelected.GetComponent<BuildStats>().cost;
                        placedTroop.GetComponent<BuildStats>().isActivated = true;
                        buildingSelected = null;
                    }
                }

            }
        }

    }
    public bool IsTooCloseToRestrictedObjects(GameObject bp)
    {
        foreach (GameObject obj in restrictedObjects)
        {
            // Use the collider's closest point for "DontPlace" and "base" tags
            if (obj.tag == "DontPlace" || obj.tag == "base")
            {
                Collider objCollider = obj.GetComponent<Collider>();
                if (objCollider != null)
                {
                    Vector3 closestPoint = objCollider.ClosestPoint(bp.transform.position);
                    float distanceToClosestPoint = Vector3.Distance(bp.transform.position, closestPoint);
                    if (distanceToClosestPoint <= 3f)
                    {
                        Debug.Log("Can't Place There");
                        return false;
                    }
                }
            }
            // Use the transform position for "turret" tags
            else if (obj.tag == "turret")
            {
                float distanceToObj = Vector3.Distance(bp.transform.position, obj.transform.position);
                if (distanceToObj <= 3f)
                {
                    Debug.Log("Can't Place There");
                    return false;
                }
            }
        }

        Debug.Log("Can Place There");
        return true;
    }
}

