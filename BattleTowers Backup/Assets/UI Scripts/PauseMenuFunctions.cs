using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenuFunctions : MonoBehaviour
{

    //    [SerializeField] private string versionName = "0.1";

    //    [SerializeField] private GameObject usernameCanvas;
    //    [SerializeField] private GameObject connectCanvas;
    //    [SerializeField] private GameObject mainButtons;
    [SerializeField] public GameObject optionsCanvas;
    [SerializeField] public GameObject mainUI;
//    [SerializeField] private GameObject mainCamera;
//    [SerializeField] private GameObject masterSlider;
//    [SerializeField] private GameObject musicSlider;
    [SerializeField] private GameObject pauseCanvas;
    //    private Slider masterVolumeSlider;
    //    private Slider musicVolumeSlider;
    //    private AudioSource audioSource;

    //    [SerializeField] private InputField usernameInput;
    //    [SerializeField] private InputField createGameInput;
    //    [SerializeField] private InputField joinGameInput;

    //    [SerializeField] private GameObject startButton;
    //    private void Awake()
    //    {
    //       PhotonNetwork.ConnectUsingSettings(versionName);
    //        Debug.Log("Connecting to Photon...");
    //    }
    //    private void Start()
    //    {
    //        audioSource = mainCamera.GetComponent<AudioSource>();
    //        masterVolumeSlider = masterSlider.GetComponent<Slider>();
    //        musicVolumeSlider = musicSlider.GetComponent<Slider>();
    //    }
    private void Update()
    {
        inputHandler();
    }

    private void inputHandler()
    {

    }
    //   private void OnConnectedToMaster()
    //   {
    //       PhotonNetwork.JoinLobby(TypedLobby.Default);
    //       Debug.Log("Connected to Photon");
    //   }

    //   public void ChangeUserNameInput()
    //  {
    //       if (usernameInput.text.Length >= 3 && usernameInput.text.Length <= 20)
    //       {
    //           startButton.SetActive(true);
    //      }
    //       else
    //      {
    //          startButton.SetActive(false);
    //      }
    //   }

    //   public void SetUsername()
    //   {
    //
    //       JoinGameMenu();
    //       PhotonNetwork.playerName = usernameInput.text;
    //
    //   }

    //   public void TakeToUserName()
    //   {
    //       usernameCanvas.SetActive(true);
    //       mainButtons.SetActive(false);
    //       optionsCanvas.SetActive(false);
    //       connectCanvas.SetActive(false);
    //   }
    //   public void JoinGameMenu()
    //   {
    //       connectCanvas.SetActive(true);
    //       mainButtons.SetActive(false);
    //
    //   }

    //   public void TakeToMainMenu()
    //   {
    //      mainButtons.SetActive(true);
    //      connectCanvas.SetActive(false);
    //       usernameCanvas.SetActive(false);
    //       optionsCanvas.SetActive(false);
    //   }

    public void TakeToOptions()
    {
        pauseCanvas.SetActive(false);
        optionsCanvas.SetActive(true);
    }

 //   public void ChangeMasterVolume()
 //   {
 //       AudioListener.volume = masterVolumeSlider.value / 100;
 //  }

 //   public void ChangeMusicVolume()
 //   {
  //      audioSource.volume = musicVolumeSlider.value / 100;
  //  }

  //  public void quitGame()
  //  {
  //      Application.Quit();
   // }

  //  public void CreateGame()
  //  {
  //      PhotonNetwork.CreateRoom(createGameInput.text, new RoomOptions() { maxPlayers = 2 }, null);
  //  }

  //  public void JoinGame()
  //  {
  //      RoomOptions roomOptions = new RoomOptions();
  //      roomOptions.maxPlayers = 2;
  //      PhotonNetwork.JoinOrCreateRoom(joinGameInput.text, roomOptions, TypedLobby.Default);
  //  }

  //  public void OnJoinedRoom()
  //  {
  //      PhotonNetwork.LoadLevel("Level1");
  //
  //  }

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        SceneManager.LoadScene(0);
    }
    public void ResumeGame()
    {
        pauseCanvas.SetActive(false);
        optionsCanvas.SetActive(false);
    }

    public void PauseBack()
    {
        pauseCanvas.SetActive(true);
        optionsCanvas.SetActive(false);
    }
}
