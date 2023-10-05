using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoldMine : MonoBehaviour
{
    public int cost;
    public int level;
    [SerializeField] GameObject uiManager;
    [SerializeField] double timer;

    
    // Start is called before the first frame update
    void Start()
    {
        uiManager = GameObject.Find("UIManager");

    }

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;
        if (timer <= 0 && gameObject.GetComponent<BuildStats>().isActivated == true)
        {
            //add gold * level
            uiManager.GetComponent<MainUIFunctions>().coins += 1 * level;
            timer = 1;
                
        }
    }
}
