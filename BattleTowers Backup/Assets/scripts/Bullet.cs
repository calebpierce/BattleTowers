using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{

    public bool isMine;
    public Vector3 target;
    public int damage;
    private GameObject levelManager;
    [SerializeField] private float speed;
    [SerializeField] private GameObject hitEffect;


    // Start is called before the first frame update
    void Start()
    {
        levelManager = GameObject.Find("GameManager");
    }
    // Update is called once per frame
    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);

        Collider[] hitColliders = Physics.OverlapSphere(transform.position, .1f);
        int i = 0;
        while (i < hitColliders.Length)
        {

            Debug.Log("Collided with " + hitColliders[i].gameObject.name + "isEnemy: " + levelManager.GetComponent<LevelManager>().enemyTroops.Contains(hitColliders[i].gameObject));
            // handle first collision only
            
            if (hitColliders[i].gameObject.transform.tag == "troop" && !levelManager.GetComponent<LevelManager>().enemyTroops.Contains(hitColliders[i].gameObject) && !isMine)
            { 
                GameObject particleEffect = Instantiate(hitEffect, transform.position, transform.rotation);
                particleEffect.transform.Translate(0, 0, .3f);
                particleEffect.transform.Rotate(Vector3.up, 180f);
                Destroy(gameObject);
            }
            

            //TODO: move the hitEffect from the bullet script to the takeDamage method on grountTroop, youll have to pass the transform and rotation to spawn it at.
            if (levelManager.GetComponent<LevelManager>().enemyTroops.Contains(hitColliders[i].gameObject) && hitColliders[i].gameObject.tag != "base")
            {

                if (isMine)
                {
                    Debug.Log("Collided with enemy:" + hitColliders[i].gameObject.name + "Calling RPC");
                    //perform an RPC call to damage the enemyaaaa
                    GameObject particleEffect = Instantiate(hitEffect, transform.position, transform.rotation);
                    particleEffect.transform.Translate(0, 0, .3f);
                    particleEffect.transform.Rotate(Vector3.up, 180f);
                    hitColliders[i].gameObject.GetComponent<GroundTroop>().photonView.RPC("takeDamage", PhotonTargets.All, damage/*, transform.position, transform.rotation*/);
                }
                Destroy(gameObject);
                break;
            }
            if (hitColliders[i].gameObject.tag == "base")
            {

                if (isMine)
                {
                    Debug.Log("Collided with base:" + hitColliders[i].gameObject.name + "Calling RPC");
                    //perform an RPC call to damage the enemyaaaa
                    GameObject particleEffect = Instantiate(hitEffect, transform.position, transform.rotation);
                    particleEffect.transform.Translate(0, 0, .3f);
                    particleEffect.transform.Rotate(Vector3.up, 180f);
                    hitColliders[i].gameObject.GetComponent<StartBaseScript>().photonView.RPC("takeDamage", PhotonTargets.All, damage/*, transform.position, transform.rotation*/);
                }
                else {
                    GameObject particleEffect = Instantiate(hitEffect, transform.position, transform.rotation);
                    particleEffect.transform.Translate(0, 0, .3f);
                    particleEffect.transform.Rotate(Vector3.up, 180f);
                }
                Destroy(gameObject);
                break;
            }
            i++;
        }

        if (Vector3.Distance(transform.position, target) <= 0.05f)
        {
            Debug.Log("Destroyed bullet because reached its target");
            Destroy(gameObject);
        }
    }
}
