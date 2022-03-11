using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class KingPiece : BasePiece
{
    
    public override void MovePeice(Cell dest)
    {
        Vector2Int loc = dest.Location;

        float x = (loc.x - Location.x) * ChessBoard.current.CELL_SIZE;
        float y = 0;
        float z = (loc.y - Location.y) * ChessBoard.current.CELL_SIZE;

        // Move to new location
        float duration = 0.5f;
        this.transform.DOMove(this.transform.position + new Vector3(x, y, z), duration);
        //this.transform.position += new Vector3(x, y, z);
        Location = loc;

        if (dest.CurrentPiece != null)
        {
            Destroy(dest.CurrentPiece.gameObject);

            GameResult checker = CheckGameOver(dest);
            if (checker.isOver)
            {
                BaseGameCTL.Current.GameState = EGameState.GAME_OVER;
                BaseGameCTL.Current.Turn = checker.winner;
            }
        }
        dest.CurrentPiece = this;

        // switch turn
        EPlayer turn = BaseGameCTL.Current.Turn;
        BaseGameCTL.Current.Turn = (turn == EPlayer.WHITE) ? EPlayer.BLACK : EPlayer.WHITE;
    }

    public override void OnSelected() 
    {
        int x = Location.x;
        int y = Location.y;
        List<Cell> cells = new List<Cell>();

        if (x < 7 && y < 7) cells.Add(ChessBoard.current.Cells[x + 1][y + 1]);
        if (x < 6) cells.Add(ChessBoard.current.Cells[x + 1][y]);
        if (x < 7 && y > 0) cells.Add(ChessBoard.current.Cells[x + 1][y - 1]);

        if (y < 7) cells.Add(ChessBoard.current.Cells[x][y + 1]);
        if (y > 0) cells.Add(ChessBoard.current.Cells[x][y - 1]);

        if (x > 0 && y < 7) cells.Add(ChessBoard.current.Cells[x - 1][y + 1]);
        if (x > 0) cells.Add(ChessBoard.current.Cells[x - 1][y]);
        if (x > 0 && y > 0) cells.Add(ChessBoard.current.Cells[x - 1][y - 1]);

        foreach (Cell c in cells)
        {
            if (c.CurrentPiece == null)
            {
                suggestCells.Add(c);
            }
            else
            {
                if (c.CurrentPiece.Player != Player)
                    suggestCells.Add(c);
            }
        }

        foreach (Cell cell in suggestCells)
        {
            cell.SetCellState(ECellState.SUGGEST);
        }
    }    
}
