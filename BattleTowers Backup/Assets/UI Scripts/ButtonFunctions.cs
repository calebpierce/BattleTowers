using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonFunctions : MonoBehaviour
{
    [SerializeField] private string versionName = "0.1";

    [SerializeField] private GameObject usernameCanvas;
    [SerializeField] private GameObject connectCanvas;
    [SerializeField] private GameObject mainButtons;
    [SerializeField] private GameObject optionsCanvas;
    [SerializeField] private GameObject mainCamera;
    [SerializeField] private GameObject masterSlider;
    [SerializeField] private GameObject musicSlider;
    [SerializeField] private GameObject pauseCanvas;
    [SerializeField] private GameObject BtnSounds;
    [SerializeField] private AudioClip btnHoverSound;
    [SerializeField] private AudioClip btnClickSound;
    private Slider masterVolumeSlider;
    private Slider musicVolumeSlider;
    private AudioSource musicSource;
    private double timer = .1;

    [SerializeField] private InputField usernameInput;
    [SerializeField] private InputField createGameInput;
    [SerializeField] private InputField joinGameInput;

    [SerializeField] private GameObject startButton;
    private void Awake()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.ConnectUsingSettings(versionName);
        Debug.Log("Connecting to Photon...");
    }
    private void Start()
    {
        musicSource = mainCamera.GetComponent<AudioSource>();
        masterVolumeSlider = masterSlider.GetComponent<Slider>();
        musicVolumeSlider = musicSlider.GetComponent<Slider>();
    }
    private void Update()
    {
        timer = timer - Time.deltaTime;
    }
    private void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby(TypedLobby.Default);
        Debug.Log("Connected to Photon");
    }
    public void playButtonHoverSound()
    {


        //time delay//
        if (timer <= 0)
        { 
            BtnSounds.GetComponent<AudioSource>().clip = btnHoverSound;
            timer = .1;
            BtnSounds.GetComponent<AudioSource>().Play();
        }

    }
    public void playButtonClickSound()
    {
        if (timer <= 0)
        {
            timer = .1;
            BtnSounds.GetComponent<AudioSource>().clip = btnClickSound;
            BtnSounds.GetComponent<AudioSource>().Play();
        }
    }
    public void ChangeUserNameInput()
    {
        if (usernameInput.text.Length >= 3 && usernameInput.text.Length <= 20)
        {
            startButton.SetActive(true);
        }
        else
        {
            startButton.SetActive(false);
        }
    }

    public void SetUsername()
    {

        JoinGameMenu();
        PhotonNetwork.playerName = usernameInput.text;
    
    }

    public void TakeToUserName()
    {
        usernameCanvas.SetActive(true);
        mainButtons.SetActive(false);
        optionsCanvas.SetActive(false);
        connectCanvas.SetActive(false);
    }
    public void JoinGameMenu()
    {
        connectCanvas.SetActive(true);
        mainButtons.SetActive(false);

    }

    public void TakeToMainMenu()
    {
        mainButtons.SetActive(true);
        connectCanvas.SetActive(false);
        usernameCanvas.SetActive(false);
        optionsCanvas.SetActive(false);
    }

    public void TakeToOptions()
    {
        mainButtons.SetActive(false);
        optionsCanvas.SetActive(true);
    }

    public void ChangeMasterVolume()
    {
        AudioListener.volume = masterVolumeSlider.value/100;
    }

    public void ChangeMusicVolume()
    {
        musicSource.volume = musicVolumeSlider.value/100;
    }

    public void quitGame()
    {
        Application.Quit();
    }

    public void CreateGame()
    {
        PhotonNetwork.CreateRoom(createGameInput.text, new RoomOptions() { maxPlayers = 2 }, null);
    }

    public void JoinGame()
    {
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.maxPlayers = 2;
        PhotonNetwork.JoinOrCreateRoom(joinGameInput.text, roomOptions, TypedLobby.Default);
    }

    public void OnJoinedRoom()
    {
        PhotonNetwork.LoadLevel("Level1");

    }
}
