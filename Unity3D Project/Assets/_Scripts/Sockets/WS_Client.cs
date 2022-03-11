using WebSocketSharp;
using UnityEngine;

public class WS_Client : MonoBehaviour
{
    WebSocket ws;

    // Start is called before the first frame update
    void Start()
    {
        ws = new WebSocket("ws://localhost:8080");
        Debug.Log("WS Start");
        ws.OnMessage += (sender, e) =>
        {
            Debug.Log("Received from " + ((WebSocket)sender).Url + ", Data: " + e.Data);
        };
        ws.Connect();
    }

    // Update is called once per frame
    void Update()
    {
        if (ws == null)
        {
            Debug.Log("null ws");
            return;
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            ws.Send("hello");
        }
    }
}
