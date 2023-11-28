using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class StartBaseScript : Photon.PunBehaviour
{
    [SerializeField] private Text playerNameTop;
    [SerializeField] private Text playerNameBottom;
    //[SerializeField] public PhotonView photonView;
    [SerializeField] private Material redMat;
    [SerializeField] private Material greyMat;

    public GameObject nPtr;
    public GameObject mPtr;
    public GameObject sPtr;
    public GameObject levelManager;
    public int health;
    public GameObject explosionEffect;

    private void Start()
    {
        levelManager = GameObject.Find("GameManager");
        //photonView = this.GetComponent<PhotonView>();
        
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
            gameObject.transform.Find("Pointers").gameObject.SetActive(false);
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
    [PunRPC]
    private void takeDamage(int d)
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
