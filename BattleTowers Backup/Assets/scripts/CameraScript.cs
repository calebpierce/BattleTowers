using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour
{
    [SerializeField] private GameObject uiManager;
    [SerializeField] private Material redMat;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                GameObject clickedGameObject = hit.transform.gameObject;
                if (clickedGameObject.tag == "pointer")
                {
                    Debug.Log("We hit a pointer");
                    if (clickedGameObject.name == "PointerNorth") 
                    {
                        Debug.Log("call the northPtr");
                        clickedGameObject.transform.parent.parent.GetComponent<StartBaseScript>().setNPtr();
                        uiManager.GetComponent<MainUIFunctions>().trackSelected = "north";
                    }
                    if (clickedGameObject.name == "PointerMid")
                    {
                        clickedGameObject.transform.parent.parent.GetComponent<StartBaseScript>().setMPtr();
                        uiManager.GetComponent<MainUIFunctions>().trackSelected = "mid";
                    }
                    if (clickedGameObject.name == "PointerSouth")
                    {
                        clickedGameObject.transform.parent.parent.GetComponent<StartBaseScript>().setSPtr();
                        uiManager.GetComponent<MainUIFunctions>().trackSelected = "south";
                    }
                }
            }
        }
    }
}
