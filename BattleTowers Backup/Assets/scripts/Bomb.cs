using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bomb : MonoBehaviour
{

    public bool isMine;
    public int targID;
    public Vector3 target;
    public int damage;
    private GameObject levelManager;
    PhotonView targetPhotonView;
    private float targetUpdate;
   [SerializeField] private float speed;
    [SerializeField] private GameObject hitEffect;


    // Start is called before the first frame update
    void Start()
    {

        targetUpdate = .1f;
        levelManager = GameObject.Find("GameManager");
    }
    // Update is called once per frame
    void Update()
    {
        if (targetPhotonView == null && targID != 0) // Ensure that targID is not the default value
        {
            targetPhotonView = PhotonView.Find(targID);
            if (targetPhotonView == null)
            {
                Debug.LogError("Target PhotonView not found for ID: " + targID);
                //return; // If we don't find the PhotonView, we don't want to proceed further.
            }
        }

        if (targetUpdate <= 0 && targetPhotonView != null)
        {
            Vector3 actualTarget = targetPhotonView.transform.position;

            // Calculate the distance from the bomb to the actual target
            Vector3 offsetTarget = new Vector3(actualTarget.x, actualTarget.y + Vector3.Distance(transform.position, actualTarget), actualTarget.z);
            float distanceToTarget = Vector3.Distance(transform.position, offsetTarget);

            // Create an offset target position with its Y value being the distance to the target
            offsetTarget = new Vector3(actualTarget.x, actualTarget.y + distanceToTarget/3, actualTarget.z);

            // Update the target position
            target = offsetTarget;
            targetUpdate = .05f;
        }
        else
        {
            targetUpdate -= Time.deltaTime;
        }
        //rotate towards target
        // Rotate towards the offset target
        Vector3 targetDirection = target - transform.position;
        Quaternion targetRotation = Quaternion.LookRotation(targetDirection);
        Quaternion offsetRotation = Quaternion.Euler(-90f, 0f, 0f);
        transform.rotation = targetRotation * offsetRotation;

        // Move towards the offset target
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
            if (levelManager.GetComponent<LevelManager>().enemyTroops.Contains(hitColliders[i].gameObject))
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
            i++;
        }

        if (Vector3.Distance(transform.position, target) <= 0.05f)
        {
            Debug.Log("Destroyed bullet because reached its target");
            Destroy(gameObject);
        }
    }
}
