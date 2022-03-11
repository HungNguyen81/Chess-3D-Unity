using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class BishopPiece : BasePiece
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

        AddSuggestCellCross(x, y);


        foreach (Cell cell in suggestCells)
        {
            cell.SetCellState(ECellState.SUGGEST);
        }
    }

}
