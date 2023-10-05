using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkManagerScript : MonoBehaviour
{
    public PhotonPlayer Player1;
    public PhotonPlayer Player2;
    // Start is called before the first frame update
    void Awake()
    {

    }
    // Update is called once per frame
    void Update()
    {

    }
    [PunRPC]
    void setPlayer1(PhotonPlayer p1)
    {
        Player1 = p1;
        Debug.Log("set player1RPC called");
    }
    [PunRPC]
    void setPlayer2(PhotonPlayer p2)
    {
        Debug.Log("set player2RPC called");
        Player2 = p2;
    }
    [PunRPC]
    void UpdatePlayers()
    {
        Debug.Log("update players called");
        Player2 = Player2;
        Player1 = Player1;
    }
}
