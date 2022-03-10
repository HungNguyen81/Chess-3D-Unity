using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BaseGameCTL : MonoBehaviour
{
    public static BaseGameCTL Current;

    private EGameState _gameState;
    private EPlayer _turn;

    public Text TurnText;
    public GameObject ResultPanel;

    public EPlayer Turn
    {
        get { return _turn; }
        set
        {
            _turn = value;
            TurnText.text = value.ToString();
            TurnText.color = (value == EPlayer.BLACK) ? Color.black : Color.white;
        }
    }

    public EGameState GameState
    {
        get { return _gameState; }
        set
        {
            _gameState = value;

            if(_gameState == EGameState.GAME_OVER)
            {
                ResultPanel.gameObject.SetActive(true);
                ResultPanel.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = $"{Turn} WIN";
            }
        }
    }


    void Awake()
    {
        Current = this;
        GameState = EGameState.PLAYING;
        Turn = EPlayer.WHITE;
    }
}
