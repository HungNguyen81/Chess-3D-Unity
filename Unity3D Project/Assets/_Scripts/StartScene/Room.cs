using UnityEngine;
using UnityEngine.UI;
using WebSocketSharp;

public class Room : MonoBehaviour
{
    public InputField nameInput;
    public InputField roomIdInput;
    public Button btnCreateRoom;
    public Button btnJoinRoom;

    public static WebSocket ws;

    private static bool _isSwitchToWaitRoom = false;

    // Start is called before the first frame update
    void Start()
    {
        ws = new WebSocket("ws://stark-coast-49667.herokuapp.com");//localhost:8080");
        Debug.Log("WS Start");
        ws.OnMessage += (sender, e) =>
        {
            Debug.Log("Received from " + ((WebSocket)sender).Url + ", Data: " + e.Data);

            string msg = e.Data;
            string code = msg.Split(' ')[0];

            if (code.Equals("ERR"))
            {

            }
            else if (code.Equals("NEWROOM"))
            {
                string roomID = msg.Split(' ')[1];
                BaseGameCTL.RoomID = roomID;
                Debug.Log("ID: " + roomID);
                BaseGameCTL.Player1_Name = nameInput.text;
                BaseGameCTL.Player2_Name = "";
                
                _isSwitchToWaitRoom = true;
            } 
            else if (code.Equals("JOIN"))
            {
                BaseGameCTL.RoomID = msg.Split(' ')[1];
                BaseGameCTL.Player1_Name = msg.Split(' ')[2];
                BaseGameCTL.Player2_Name = msg.Split(' ')[3];
                Debug.Log("p2: " + BaseGameCTL.Player2_Name);

                if (BaseGameCTL.type == EPlayer.BLACK)
                {
                    _isSwitchToWaitRoom = true;
                }
                else
                {
                    WaitRoom.isToggleStartBtn = true;
                    Debug.Log("toggle");
                }
            } 
            else if (code.Equals("OK"))
            {
                WaitRoom.isStartGame = true;
            } 
            else if (code.Equals("MOVE"))
            {
                ChessBoard.isOnMove = true;
                ChessBoard.msg = msg;
            }
            else if (code.Equals("OUT"))
            {
                WaitRoom.playerRest = msg.Split(' ')[1];
            }
        };
        ws.Connect();
        DontDestroyOnLoad(this.gameObject);
    }

    private void Update()
    {
        if (_isSwitchToWaitRoom)
        {
            SceneLoader.Load(SceneLoader.Scene.WaitScene);
            _isSwitchToWaitRoom = false;
        }
    }

    public static void SendMove(Cell from, Cell to)
    {
        ws.Send($"MOVE {BaseGameCTL.RoomID} {from.Location.x},{from.Location.y} {to.Location.x},{to.Location.y}");
    }

    public void OnNameInputChange()
    {
        if (nameInput.text.Equals(""))
        {
            btnCreateRoom.gameObject.SetActive(false);
            btnJoinRoom.gameObject.SetActive(false);
        } else
        {
            btnCreateRoom.gameObject.SetActive(true);
        }
    }

    public void OnRoomIdInputChange()
    {
        if (roomIdInput.text.Equals("") && nameInput.text.Equals(""))
        {
            btnJoinRoom.gameObject.SetActive(false);
        }
        else
        {
            btnJoinRoom.gameObject.SetActive(true);
        }
    }

    public void NewRoom()
    {
        string name = nameInput.text;
        nameInput.gameObject.SetActive(false);

        ws.Send($"ROOM **** {name}");
        BaseGameCTL.type = EPlayer.WHITE;
    }

    public void Join()
    {
        string name = nameInput.text;
        string roomID = roomIdInput.text;

        ws.Send($"ROOM {roomID} {name}");
        BaseGameCTL.type = EPlayer.BLACK;
    }


    void OnDisable()
    {
        ws.Send($"TERMINATE {BaseGameCTL.RoomID}");
    }
}
