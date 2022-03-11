using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cell : MonoBehaviour
{
    private ECellColor _color, _normalColor;
    private ECellState _state;
    private Transform cellHoverObj;
    private Transform cellSelectObj;
    private Transform cellSuggestObj;
    private Vector2Int _location;

    private BasePiece _currentPiece = null;

    public BasePiece CurrentPiece
    {
        get { return _currentPiece; }
        set { _currentPiece = value; }
    }


    public Vector2Int Location
    {
        get { return _location; }
        set { _location = value; }
    }


    public ECellColor Color
    {
        get { return _color; }
        set
        {
            _color = value;
            switch (_color)
            {
                case ECellColor.BLACK:
                    GetComponent<Renderer>().material = ResourcesCTL.Instance.BlackMaterial;
                    break;
                case ECellColor.WHITE:
                    GetComponent<Renderer>().material = ResourcesCTL.Instance.WhiteMaterial;
                    break;
                case ECellColor.SELECT:
                    GetComponent<Renderer>().material = ResourcesCTL.Instance.SelectedMaterial;
                    break;
                default:
                    break;
            }
        }
    }

    public ECellState State
    {
        get { return _state; }
        private set
        {
            _state = value;
            //cellHoverObj.gameObject.SetActive(false);
            //cellSelectObj.gameObject.SetActive(false);

            // handle state changed
            switch (_state)
            {
                case ECellState.NORMAL:
                    SetActiveState(false, false, false);
                    break;
                case ECellState.HOVER:
                    SetActiveState(true, false, false);
                    break;
                case ECellState.SELECTED:
                    SetActiveState(false, true, false);
                    break;
                case ECellState.SUGGEST:
                    SetActiveState(false, false, true);
                    break;
                default:
                    break;
            }
        }
    }

    void SetActiveState(bool isHover, bool isSelect, bool isSuggest)
    {
        cellHoverObj?.gameObject.SetActive(isHover);
        cellSelectObj?.gameObject.SetActive(isSelect);
        cellSuggestObj?.gameObject.SetActive(isSuggest);
    }

    public void SetColor(ECellColor color)
    {
        _color = color;
        switch (color)
        {
            case ECellColor.BLACK:
                
                break;
            case ECellColor.WHITE:
                break;
            case ECellColor.HOVER:
                break;
            default:
                break;
        }
    }

    public float SIZE
    {
        get
        {
            return GetComponent<Renderer>().bounds.size.x;
        }
    }

    public void SetupPosition(Vector3 basePos, int i, int j)
    {
        this.transform.position = new Vector3(i * SIZE, 0, j * SIZE);
    }

    protected void Start()
    {
        cellHoverObj = this.transform.GetChild(0);
        cellSelectObj = this.transform.GetChild(1);
        cellSuggestObj = this.transform.GetChild(2);

        State = ECellState.NORMAL;
    }


    public void SetCellState(ECellState cellState)
    {
        if (cellState != ECellState.SELECTED)
        {
            if (State != ECellState.SELECTED)
            {
                State = cellState;
            }
            //if (cellState == ECellState.UNSELECTED)
            //    State = ECellState.NORMAL;
        }
        else
        {
            if (State == ECellState.SELECTED)
            {
                State = ECellState.NORMAL;
            }
            else State = ECellState.SELECTED;
        }

    }
}
