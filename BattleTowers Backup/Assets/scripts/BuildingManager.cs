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
    // Start is called before the first frame update
    void Start()
    {
        
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
                    //make it so building is inactive, but can still be seen   ie. just the model w/o script. make sure no collider on preview
                    //make it green if you can afford, red if you cannot
                    preview = false;
                }
                if (isBuildingSelected && isSelectUp == false)
                {
                    setTarget();
                    buildingPreview.transform.position = target;
                    if (Input.GetMouseButtonDown(0) && (uiManager.GetComponent<MainUIFunctions>().coins >= buildingSelected.GetComponent<BuildStats>().cost) /* && its closer to your base than enemys base*/)
                    {
                        uiManager.GetComponent<MainUIFunctions>().coins -= buildingSelected.GetComponent<BuildStats>().cost;
                        GameObject placedBuilding = PhotonNetwork.Instantiate(buildingSelected.name, buildingPreview.transform.position, new Quaternion(0, 0, 0, 0), 0);
                        //PhotonNetwork.Instantiate(buildingSelected.name, buildingPreview.transform.position, new Quaternion(0, 0, 0, 0), 0);
                        placedBuilding.GetComponent<BuildStats>().isActivated = true;
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
}
