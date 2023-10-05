using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : Photon.PunBehaviour
{
    [SerializeField] private GameObject pauseCanvas;
    [SerializeField] private GameObject pauseManager;
    [SerializeField] public PhotonPlayer p1;
    [SerializeField] public PhotonPlayer p2;
    [SerializeField] public GameObject NetworkLevelManager;
    [SerializeField] public GameObject mainUi;

    public List<GameObject> enemyTroops = new List<GameObject>();
    //public GameObject enemyBase;
    // Start is called before the first frame update
    void Awake()
    {
        Debug.Log("awake");
        NetworkLevelManager = PhotonView.Find(1).gameObject;
        if (PhotonNetwork.isMasterClient)
        {
            Debug.Log("instantiate starter base");
            PhotonNetwork.Instantiate("StartingBaseFoundation", new Vector3(0, -2f, -70), new Quaternion(0, 0, 0, 0), 0);
            NetworkLevelManager.GetComponent<PhotonView>().RPC("setPlayer1", PhotonTargets.All, PhotonNetwork.player);
        }
        else
        {
            GameObject startBase2 = PhotonNetwork.Instantiate("StartingBaseFoundation", new Vector3(0, -2f, 70), new Quaternion(180, 0, 0, 0), 0);
            NetworkLevelManager.GetComponent<PhotonView>().RPC("setPlayer2", PhotonTargets.All, PhotonNetwork.player);
            //startBase2.transform.FindChild("Canvas").RotateAroundLocal(, 180f);
        }
    }
    void Start()
    {

    }
    public override void OnJoinedRoom()
    {
        Debug.Log("onjoinedroom called");
    }
    public override void OnPhotonPlayerConnected(PhotonPlayer newPlayer)
    {
        NetworkLevelManager.GetComponent<PhotonView>().RPC("setPlayer1", PhotonTargets.All, PhotonNetwork.player);
        Debug.Log("onphotonplayerconnected called");
    }

    // Update is called once per frame
    void Update()
    {
        handleInput();
    }
    void handleInput()
    {

    }
}
