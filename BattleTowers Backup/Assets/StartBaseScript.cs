using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class StartBaseScript : MonoBehaviour
{
    [SerializeField] private Text playerNameTop;
    [SerializeField] private Text playerNameBottom;
    [SerializeField] private PhotonView photonView;
    [SerializeField] private Material redMat;
    [SerializeField] private Material greyMat;

    public GameObject nPtr;
    public GameObject mPtr;
    public GameObject sPtr;
    public GameObject levelManager;
    


    private void Start()
    {
        levelManager = GameObject.Find("GameManager");

        
       // nPtr = gameObject.transform.FindChild("PointerNorth").gameObject;
       // mPtr = gameObject.transform.FindChild("PointerMid").gameObject;
       // sPtr = gameObject.transform.FindChild("PointerSouth").gameObject;
        if (photonView.isMine)
        {
            playerNameTop.text = PhotonNetwork.playerName;
            playerNameTop.color = new Color(0, 255, 255, 170);
            playerNameBottom.text = PhotonNetwork.playerName;
            playerNameBottom.color = new Color(0, 255, 255, 170);
        }
        else
        { 
            playerNameTop.text = photonView.owner.name;
            playerNameTop.color = new Color(255, 0, 0, 170);
            playerNameBottom.text = photonView.owner.name;
            playerNameBottom.color = new Color(255, 0, 0, 170);
            gameObject.transform.FindChild("Pointers").gameObject.SetActive(false);
            levelManager.GetComponent<LevelManager>().enemyTroops.Add(gameObject);

        }
    }
    public void setNPtr()
    {
        Debug.Log("set the mats" );
        nPtr.GetComponent<MeshRenderer>().sharedMaterial = redMat;
        mPtr.GetComponent<MeshRenderer>().sharedMaterial = greyMat;
        sPtr.GetComponent<MeshRenderer>().sharedMaterial = greyMat;
    }
    
    public void setMPtr()
    {
        nPtr.GetComponent<MeshRenderer>().sharedMaterial = greyMat;
        mPtr.GetComponent<MeshRenderer>().sharedMaterial = redMat;
        sPtr.GetComponent<MeshRenderer>().sharedMaterial = greyMat;
    }
    public void setSPtr()
    {
        nPtr.GetComponent<MeshRenderer>().sharedMaterial = greyMat;
        mPtr.GetComponent<MeshRenderer>().sharedMaterial = greyMat;
        sPtr.GetComponent<MeshRenderer>().sharedMaterial = redMat;
    }
    
    private void Update()
    {
       playerNameTop.transform.LookAt(Camera.main.transform);
        playerNameBottom.transform.LookAt(Camera.main.transform);//why does this cause so many errors:(
                                                              //  playerName.transform.rotation = new Quaternion(playerName.transform.rotation.x, playerName.transform.rotation.y+180, playerName.transform.rotation.z, 0);
    }
}
