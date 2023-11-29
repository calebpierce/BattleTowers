using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class EndGame : Photon.PunBehaviour
{

    float timer;
    public float deathtimer = 10;


    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;

        if (timer >= deathtimer)
        {
            //switch to game over screen.
            SceneManager.LoadScene(2);
            //Destroy(gameObject);
        }
    }
}