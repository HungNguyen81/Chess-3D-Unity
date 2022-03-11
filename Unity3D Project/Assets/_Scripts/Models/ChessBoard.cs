using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ChessBoard : MonoBehaviour
{
    public static ChessBoard current;
    private Vector3 basePosition = new Vector3(-3.5f, 0, 0);
    private Cell[][] _cells;
    public GameObject cellPrefab;
    public LayerMask cellLayerMask;
    private Cell _currentHoverCell = null;
    private Cell _currentSelectCell = null;
    public Text playerText;

    public Camera blackCam;
    public Camera whiteCam;

    public static string msg;
    public static bool isOnMove = false;

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

        string black = "null", white = "null";

        if(!BaseGameCTL.isToggleBlackWhite)
        {
            black = BaseGameCTL.Player2_Name;
            white = BaseGameCTL.Player1_Name;
        }
        else
        {
            black = BaseGameCTL.Player1_Name;
            white = BaseGameCTL.Player2_Name;
        }
        playerText.text = $"BLACK: {black}\nWHITE: {white}";

    }

    void Update()
    {
        if(BaseGameCTL.Current.GameState == EGameState.PLAYING 
            || BaseGameCTL.Current.GameState == EGameState.SELECTING)
        {
            CheckUserInput();
        }

        if (isOnMove)
        {
            string[] msgArr = msg.Split(' ');
            int x = int.Parse(msgArr[2].Split(',')[0]);
            int y = int.Parse(msgArr[2].Split(',')[1]);
            int xTo = int.Parse(msgArr[3].Split(',')[0]);
            int yTo = int.Parse(msgArr[3].Split(',')[1]);

            Debug.Log("From (" + x + "," + y + ") to (" + xTo + "," + yTo + ")");

            Cell from = Cells[x][y];
            Cell to = Cells[xTo][yTo];

            // dich chuyen quan co
            from.CurrentPiece?.MovePeice(to);
            from.CurrentPiece = null;

            isOnMove = false;
        }
    }

    public void RestartGame()
    {
        BaseGameCTL.isToggleBlackWhite = !BaseGameCTL.isToggleBlackWhite;
        BaseGameCTL.type = BaseGameCTL.type == EPlayer.BLACK ? EPlayer.WHITE : EPlayer.BLACK;
        //Scene scene = SceneManager.GetActiveScene(); 
        SceneLoader.Load(SceneLoader.Scene.WaitScene);
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


        if (BaseGameCTL.Current.Turn == BaseGameCTL.type)
        {
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

                        // chuyen sang trang thai dang chon nuoc di
                        EGameState state = BaseGameCTL.Current.GameState;
                        if (state == EGameState.PLAYING)
                        {
                            BaseGameCTL.Current.GameState = EGameState.SELECTING;
                        }
                        c.CurrentPiece.OnSelected();
                    }
                }

                if (cell != null && cell.State == ECellState.SUGGEST)
                {
                    BaseGameCTL.Current.GameState = EGameState.PLAYING;
                    BasePiece piece = _currentSelectCell?.CurrentPiece;

                    // send movement to opposite player
                    Room.SendMove(_currentSelectCell, cell);

                    // Move piece to destination cell
                    piece?.MovePeice(cell);

                    // unselect current selected cell and deactive suggest cells
                    _currentSelectCell?.SetCellState(ECellState.SELECTED);
                    piece.Unselect();
                    _currentSelectCell.CurrentPiece = null;
                    _currentSelectCell = null;
                }
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

        int index = 0, pIndex = 0;
        for (int i = 0; i < 8; i++)
        {
            _cells[i] = new Cell[8];
            for (int j = 0; j < 8; j++)
            {
                Transform obj = this.transform.GetChild(0).GetChild(index++);

                _cells[i][j] = obj.GetComponent<Cell>();
                _cells[i][j].Location = new Vector2Int(i, j);
            }
        }

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

        // Setup black/white camera view
        if(BaseGameCTL.type == EPlayer.BLACK)
        {
            blackCam.gameObject.SetActive(true);
            whiteCam.gameObject.SetActive(false);
        } else
        {
            blackCam.gameObject.SetActive(false);
            whiteCam.gameObject.SetActive(true);
        }

        Debug.Log("Setup finished");
    }

    public Vector3 CalculatePos(int i, int j)
    {
        return basePosition + new Vector3(CELL_SIZE * i, 0, CELL_SIZE * j);
    }
}
