using UnityEngine;
using UnityEngine.UI;

public class WaitRoom : MonoBehaviour
{
    public Text id;
    public Button startButton;
    public Text player1Name;
    public Text player2Name;

    public static bool isToggleStartBtn = false;
    public static bool isStartGame = false;
    public static string playerRest = "";

    void Start()
    {
        id.text = "ID:" + BaseGameCTL.RoomID;
        player1Name.text = BaseGameCTL.Player1_Name;
        player2Name.text = BaseGameCTL.Player2_Name;

        if(BaseGameCTL.type == EPlayer.WHITE && !player2Name.text.Equals(""))
        {
            startButton.gameObject.SetActive(true);
        }
    }

    public void StartGame()
    {
        Room.ws.Send($"START {BaseGameCTL.RoomID}");
    }

    public void Back()
    {
        Room.ws.Send($"TERMINATE {BaseGameCTL.RoomID}");
        BaseGameCTL.RoomID = "";
        SceneLoader.Load(SceneLoader.Scene.StartScene);
    }

    private void Update()
    {
        if (isToggleStartBtn)
        {
            startButton.gameObject.SetActive(true);
            player2Name.text = BaseGameCTL.Player2_Name;
            isToggleStartBtn = false;
        } 
        else if (isStartGame)
        {
            SceneLoader.Load(SceneLoader.Scene.TwoPlayerScene);
            isStartGame = false;
        }
        else if (!playerRest.Equals(""))
        {
            if (player1Name.text.Equals(playerRest))
            {
                player2Name.text = "";
            } else
            {
                player1Name.text = player2Name.text;
                player2Name.text = "";
                BaseGameCTL.Player1_Name = BaseGameCTL.Player2_Name;
                BaseGameCTL.Player2_Name = "";
            }
            playerRest = "";
        }
    }
}
