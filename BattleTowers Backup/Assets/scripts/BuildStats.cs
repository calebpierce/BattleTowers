using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildStats : MonoBehaviour
{
    public int cost;
    public bool isActivated; //used to stop buildings from working before they are placed
    public bool isEnemy;
    // Start is called before the first frame update
    void Start()
    {
        isEnemy = !gameObject.GetComponent<PhotonView>().isMine;
    }
    private void Awake()
    {

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
