using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BasePiece : MonoBehaviour
{
    [SerializeField]
    protected Vector3 offset;

    public Vector2Int Location { get; set; }

    public string Name;

    [SerializeField]
    protected EPlayer player;

    public EPlayer Player
    {
        get { return player; }
        protected set { player = value; }
    }
    protected List<Cell> suggestCells = new List<Cell>();

    public abstract void MovePeice(Cell dest);
    public abstract void OnSelected();

    public void Unselect()
    {
        foreach (Cell c in suggestCells)
        {
            c?.SetCellState(ECellState.NORMAL);
        }
        suggestCells = new List<Cell>();
    }

    public struct GameResult
    {
        public bool isOver;
        public EPlayer winner;
     
        public GameResult(bool isOver, EPlayer winner)
        {
            this.isOver = isOver;
            this.winner = winner;
        }
    }

    protected GameResult CheckGameOver(Cell c)
    {
        return new GameResult(c.CurrentPiece.GetType() == typeof(KingPiece),
            c.CurrentPiece.Player);
    }

    protected void AddSuggestCellX(int x, int y)
    {
        Cell c;
        for (int i = x - 1; i >= 0; i--)
        {
            //if (i < 0) break;
            c = ChessBoard.current.Cells[i][y];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                    suggestCells.Add(c);
                break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
        for (int i = x + 1; i < 8; i++)
        {
            //if (i > 7) break;
            c = ChessBoard.current.Cells[i][y];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                    suggestCells.Add(c);
                break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
    }
    protected void AddSuggestCellY(int x, int y)
    {
        Cell c;
        for (int i = y - 1; i >= 0; i--)
        {
            if (i < 0) break;
            c = ChessBoard.current.Cells[x][i];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                {
                    suggestCells.Add(c);
                    break;
                }
                else break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
        for (int i = y + 1; i < 8; i++)
        {
            c = ChessBoard.current.Cells[x][i];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                {
                    suggestCells.Add(c);
                    break;
                }
                else break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
    }

    protected void AddSuggestCellCross(int x, int y)
    {
        Cell c;
        for (int offset = 1; offset < 1 + System.Math.Min(x, y); offset++)
        {
            if (x - offset < 0 || y - offset < 0) break;
            c = ChessBoard.current.Cells[x - offset][y - offset];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                {
                    suggestCells.Add(c);
                    break;
                }
                else break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
        for (int offset = 1; offset < 1 + System.Math.Min(x, 7 - y); offset++)
        {
            if (x - offset < 0 || y + offset > 7) break;
            c = ChessBoard.current.Cells[x - offset][y + offset];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                {
                    suggestCells.Add(c);
                    break;
                }
                else break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
        for (int offset = 1; offset < 1 + System.Math.Min(7 - x, y); offset++)
        {
            if (x + offset > 7 || y - offset < 0) break;
            c = ChessBoard.current.Cells[x + offset][y - offset];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                {
                    suggestCells.Add(c);
                    break;
                }
                else break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
        for (int offset = 1; offset < 1 + System.Math.Min(7 - x, 7 - y); offset++)
        {
            if (x + offset > 7 || y + offset > 7) break;
            c = ChessBoard.current.Cells[x + offset][y + offset];
            if (c.CurrentPiece != null)
            {
                if (c.CurrentPiece.Player != Player)
                {
                    suggestCells.Add(c);
                    break;
                }
                else break;

            }
            else
            {
                suggestCells.Add(c);
            }
        }
    }
}
