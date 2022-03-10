using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChessBoard : MonoBehaviour
{
    public static ChessBoard current;
    private Vector3 basePosition = new Vector3(-3.5f, 0, 0);
    private Cell[][] _cells;
    public GameObject cellPrefab;
    public LayerMask cellLayerMask;
    private Cell _currentHoverCell = null;
    private Cell _currentSelectCell = null;

    public Cell[][] Cells { get { return _cells; } }

    public float CELL_SIZE
    {
        get
        {
            return cellPrefab.GetComponent<Cell>().SIZE;
        }
    }

    private void Awake()
    {
        current = this;
        Setup();
    }

    void Update()
    {
        if(BaseGameCTL.Current.GameState == EGameState.PLAYING 
            || BaseGameCTL.Current.GameState == EGameState.SELECTING)
        {
            CheckUserInput();
        }
    }

    public void RestartGame()
    {
        Scene scene = SceneManager.GetActiveScene(); 
        SceneManager.LoadScene(scene.name);
    }

    void CheckUserInput()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        Cell cell = null;

        if (Physics.Raycast(ray, out hit, 1000, cellLayerMask.value))
        {
            Debug.DrawLine(ray.origin, hit.point);

            cell = hit.collider.GetComponent<Cell>();

            Debug.Log(cell.CurrentPiece?.Player.ToString());

            // ko hover vao cac cell voi trang thai SUGGEST
            if (cell.State != ECellState.SUGGEST)
            {
                if (cell != _currentHoverCell)
                {
                    _currentHoverCell?.SetCellState(ECellState.NORMAL);
                    _currentHoverCell = cell;
                    _currentHoverCell.SetCellState(ECellState.HOVER);
                }
            }
            else
            {
                if (cell != _currentHoverCell)
                {
                    _currentHoverCell?.SetCellState(ECellState.NORMAL);
                    _currentHoverCell = null;
                }
            }
        }
        else
        {
            if(_currentHoverCell != null)
            {
                _currentHoverCell.SetCellState(ECellState.NORMAL);
                _currentHoverCell = null;
            }
        }


        // handle xu kien nhan chuot
        if (Input.GetMouseButtonDown(0))
        {
            if (_currentHoverCell != null && _currentHoverCell.CurrentPiece != null 
                && _currentHoverCell.CurrentPiece.Player == BaseGameCTL.Current.Turn)
            {
                _currentSelectCell?.SetCellState(ECellState.SELECTED);
                _currentSelectCell?.CurrentPiece.Unselect();
                _currentSelectCell = _currentHoverCell;
                _currentSelectCell?.SetCellState(ECellState.SELECTED);

                if (_currentSelectCell != null)
                {
                    Cell c = _currentSelectCell;
                    //Debug.Log(c.CurrentPiece?.Name + " SELECTED at " + c.transform.position.ToString());

                    // chuyen sang trang thai dang chon nuoc di
                    EGameState state = BaseGameCTL.Current.GameState;
                    if (state == EGameState.PLAYING)
                    {
                        BaseGameCTL.Current.GameState = EGameState.SELECTING;
                    }
                    c.CurrentPiece.OnSelected();
                }
            }

            if(cell != null && cell.State == ECellState.SUGGEST)
            {
                BaseGameCTL.Current.GameState = EGameState.PLAYING;
                BasePiece piece = _currentSelectCell?.CurrentPiece;

                // Move piece to destination cell
                piece?.MovePeice(cell);

                // unselect current selected cell and deactive suggest cells
                _currentSelectCell?.SetCellState(ECellState.SELECTED);
                piece.Unselect();
                _currentSelectCell.CurrentPiece = null;
                //cell.CurrentPiece = piece;
                _currentSelectCell = null;
            }
        }   

    }

    [ContextMenu("init")]
    public void InitChessBoard()
    {
        _cells = new Cell[8][];
        for (int i = 0; i < 8; i++)
        {
            _cells[i] = new Cell[8];
            for (int j = 0; j < 8; j++)
            {
                GameObject obj = GameObject.Instantiate(cellPrefab, CalculatePos(i, j), Quaternion.identity) as GameObject;

                // chess board is parent of new objects
                obj.transform.parent = this.transform.GetChild(0);

                _cells[i][j] = obj.GetComponent<Cell>();
                _cells[i][j].Color = ((i + j) % 2 == 0) ? ECellColor.BLACK : ECellColor.WHITE;
            }
        }
    }

    [ContextMenu("Setup")]
    public void Setup()
    {
        _cells = new Cell[8][];
        //pieces = new List<BasePiece>();
        int index = 0, pIndex = 0;
        for (int i = 0; i < 8; i++)
        {
            _cells[i] = new Cell[8];
            for (int j = 0; j < 8; j++)
            {
                Transform obj = this.transform.GetChild(0).GetChild(index++);
                //obj.transform.parent = this.transform;

                _cells[i][j] = obj.GetComponent<Cell>();
                _cells[i][j].Location = new Vector2Int(i, j);
            }
        }
        //_cells[7][6].SetCellState(ECellState.SELECTED);

        for(int j = 0; j < 8; j++)
        {
            for(int i = 0; i < 8; i++)
            {
                if (j == 0 || j == 1 || j == 6 || j == 7)
                {
                    BasePiece piece = this.transform.GetChild(1).GetChild(pIndex++).GetComponent<BasePiece>();
                    //pieces.Add(piece);
                    piece.Location = _cells[i][j].Location;
                    _cells[i][j].CurrentPiece = piece;
                } else
                {
                    _cells[i][j].CurrentPiece = null;
                }
            }
        }

        Debug.Log("Setup finished");
    }

    public Vector3 CalculatePos(int i, int j)
    {
        return basePosition + new Vector3(CELL_SIZE * i, 0, CELL_SIZE * j);
    }
}
