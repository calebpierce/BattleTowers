using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class MainUIFunctions : Photon.PunBehaviour
{
    [SerializeField] private Text player1NameText;
    [SerializeField] private Text player2NameText;
    [SerializeField] private Text ping;
    [SerializeField] private Text joinCodeText;
    [SerializeField] private GameObject buildSelectionMainCanvas;
    [SerializeField] private GameObject buildBuildingCanvas;
    [SerializeField] private GameObject buildTowerCanvas;
    [SerializeField] private GameObject trainTroopsCanvas;
    [SerializeField] private GameObject placementManager;
    [SerializeField] private GameObject pauseCanvas;
    [SerializeField] private GameObject pauseMenuMan;
    [SerializeField] private Button buildingsButton;
    [SerializeField] private Button towersButton;
    [SerializeField] private Button troopsButton;
    [SerializeField] private Text coinsText;

    public string trackSelected = null;
    public int coins;

    double timer = 1;
    public static PhotonPlayer player1;
    public static PhotonPlayer player2;
    private bool isPlayerTextDisplayed = false;
    [SerializeField] private GameObject networkManager;
    // Start is called before the first frame update
    void Start()
    {
        joinCodeText.text = "Join Code: " + PhotonNetwork.room.Name;
        coins = 100;
        trackSelected = null;
    }
    public override void OnPhotonPlayerConnected(PhotonPlayer newPlayer)
    {
        Debug.Log("onphotonplayerconnected called");

    }
    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.countOfPlayers == 2)
        {
            Debug.Log("onjoinedroom called");

        }
    }


    // Update is called once per frame
    void Update()
    {
        coinsText.text = "COINS: " + coins.ToString();
        if (pauseCanvas.active == false && Input.GetKeyDown(KeyCode.Escape) && !buildSelectionMainCanvas.active)
        {
            pauseCanvas.SetActive(true);
        }
        else if (pauseCanvas.active == false && Input.GetKeyDown(KeyCode.Escape) && buildSelectionMainCanvas.active)
        {
            closeSelectionMenu();
        }
        else if (pauseCanvas.active == true && Input.GetKeyDown(KeyCode.Escape))
        {
            Debug.Log("resume");
            pauseMenuMan.GetComponent<PauseMenuFunctions>().ResumeGame();
        }
      //  if (Input.GetKeyDown(KeyCode.Escape) && !buildSelectionMainCanvas.active)
      //  {
      //      OpenSelectionMenu();
      //      OpenBuildBuildingMenu();
      //      placementManager.GetComponent<BuildingManager>().isSelectUp = true;
      //  }
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            OpenSelectionMenu();
            OpenBuildBuildingMenu();
            placementManager.GetComponent<BuildingManager>().isSelectUp = true;
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            OpenSelectionMenu();
            OpenBuildTowerMenu();
            placementManager.GetComponent<BuildingManager>().isSelectUp = true;
        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            OpenSelectionMenu();
            OpenTrainTroopsMenu();
            placementManager.GetComponent<BuildingManager>().isSelectUp = true;
        }

        if (isPlayerTextDisplayed == false && PhotonNetwork.room.playerCount == 2)
        {
            player1 = networkManager.GetComponent<NetworkManagerScript>().Player1;
            player2 = networkManager.GetComponent<NetworkManagerScript>().Player2;
            if (player1 == PhotonNetwork.player)
            {
                player1NameText.text = player1.name;
                player2NameText.text = player2.name;
            }
            else if (player2 == PhotonNetwork.player)
            {
                player1NameText.text = player2.name;
                player2NameText.text = player1.name;
            }
            isPlayerTextDisplayed = true;
        }
        timer = timer - Time.deltaTime;
        if (timer <= 0)
        {
            //Debug.Log("ping");
            ping.text = "Ping: " + PhotonNetwork.GetPing();
            timer = 1;

        }
    }
        public void OpenSelectionMenu()
        { buildSelectionMainCanvas.SetActive(true); }
        public void OpenBuildBuildingMenu()
        {
        buildingsButton.image.color = Color.green;
        towersButton.image.color = Color.white;
        troopsButton.image.color = Color.white;
        buildBuildingCanvas.SetActive(true);
            buildTowerCanvas.SetActive(false);
            trainTroopsCanvas.SetActive(false);
        }
        public void OpenBuildTowerMenu()
        {
        buildingsButton.image.color = Color.white;
        towersButton.image.color = Color.green;
        troopsButton.image.color = Color.white;
        buildTowerCanvas.SetActive(true);
            buildBuildingCanvas.SetActive(false);
            trainTroopsCanvas.SetActive(false);
        }
        public void OpenTrainTroopsMenu()
        {
        buildingsButton.image.color = Color.white;
        towersButton.image.color = Color.white;
        troopsButton.image.color = Color.green;
        trainTroopsCanvas.SetActive(true);
            buildTowerCanvas.SetActive(false);
            buildBuildingCanvas.SetActive(false);
        }
        public void closeSelectionMenu()
        {
        buildingsButton.image.color = Color.white;
        towersButton.image.color = Color.white;
        troopsButton.image.color = Color.white;
        trainTroopsCanvas.SetActive(false);
            buildTowerCanvas.SetActive(false);
            buildBuildingCanvas.SetActive(false);
            buildSelectionMainCanvas.SetActive(false);
        placementManager.GetComponent<BuildingManager>().isSelectUp = false;
        }
    public void SetPrefabToPlace(GameObject prefab)
    {
        //closeSelectionMenu();
        placementManager.GetComponent<BuildingManager>().buildingSelected = prefab;
        Debug.Log("prefab set");
    }
    
}
