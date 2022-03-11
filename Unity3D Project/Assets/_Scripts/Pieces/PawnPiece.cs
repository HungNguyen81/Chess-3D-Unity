using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class PawnPiece : BasePiece
{
    private bool _isMoved = false;

    public override void MovePeice(Cell dest)
    {
        Vector2Int loc = dest.Location;
        Debug.Log("Pawn moved" + Location.ToString() + " to " + loc.ToString());
        _isMoved = true;

        float x = (loc.x - Location.x) * ChessBoard.current.CELL_SIZE;
        float y = 0;
        float z = (loc.y - Location.y) * ChessBoard.current.CELL_SIZE;

        // Move to new location
        float duration = 0.5f;
        this.transform.DOMove(this.transform.position + new Vector3(x, y, z), duration);

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


    bool Check(int x)
    {
        return x < 8 && x >= 0;
    }

    public override void OnSelected()
    {
        int maxNumOfSteps = _isMoved? 1:2;
        int tmp = (int)player - 1;
        int X1, X2, Y;

        X1 = Location.x + tmp;
        X2 = Location.x - tmp;
        Y = Location.y + tmp;

        Cell c1 = Check(X1) && Check(Y) ? ChessBoard.current.Cells[X1][Y] : null;
        Cell c2 = Check(X2) && Check(Y) ? ChessBoard.current.Cells[X2][Y] : null;

        for (int step = 1; step <= maxNumOfSteps; step++)
        {
            Cell c = ChessBoard.current.Cells[Location.x][Location.y + tmp * step];

            if (c.CurrentPiece == null)
            {
                c.SetCellState(ECellState.SUGGEST);
                suggestCells.Add(c);
            }
            else break;
                
        }
        if (c1 != null && c1.CurrentPiece != null && c1.CurrentPiece.Player != Player)
        {
            c1.SetCellState(ECellState.SUGGEST);
            suggestCells.Add(c1);
        }
        if (c2 != null && c2.CurrentPiece != null && c2.CurrentPiece.Player != Player)
        {
            c2.SetCellState(ECellState.SUGGEST);
            suggestCells.Add(c2);
        }

    }

}
