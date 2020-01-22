#include "basic_structs.h"
#include "evaluation.h"
#include <stdlib.h>

//white, black, (flipped, starts at A1)
//[type][side][square]
short PositionValueMatrix[7][2][64] = {
	{
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, }
	},
	// bishopPositionValues
	{
		{
			0,  0,  0,  0,  0,  0,  0, 0,
			0,  5,  0,  0,  0,  0,  5, 0,
			0,  0, 10, 10, 10, 10,  0, 0,
			0,  0, 10, 10, 10, 10,  0, 0,
			0,  0,  5, 10, 10,  5,  0, 0,
			0,  0,  5, 10, 10,  5,  0, 0,
			0,  0,  0,  0,  0,  0,  0, 0,
			0,  0,  0,  0,  0,  0,  0, 0,
		},{
			0,  0,  0,  0,  0,  0, 0, 0,
			0,  0,  0,  0,  0,  0,  0, 0,
			0,  0,  5, 10, 10,  5,  0, 0,
			0,  5,  5, 10, 10,  5,  5, 0,
			0,  0, 10, 10, 10, 10,  0, 0,
			0,  0, 10, 10, 10, 10,  0, 0,
			0,  5,  0,  0,  0,  0,  5, 0,
			0,  0,  0,  0,  0,  0,  0, 0
		}
	},
	//rookPositionValues[2][64] =
	{
		{
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			30,30,30,30,30,30,30,30,
			0, 0, 0, 0, 0, 0, 0, 0,
		},
		{
			0, 0, 0, 0, 0, 0, 0, 0,
		   30,30,30,30,30,30,30,30,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
		}
	},
	// queenPositionValues[2][64] = 
	{
		{
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
		},
		{
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
		}
	},
	//char pawnPositionValues[2][64] =
	{
		{
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 5, 5, 0, 0, 0,
			3, 3, 3,30,30, 3, 3, 3,
			6, 6, 6,20,20, 6, 6, 6,
			9, 9, 9, 9, 9, 9, 9, 9,
			12,12,12,12,12,12,12,12,
			0, 0, 0, 0, 0, 0, 0, 0,
		},
		{
			0, 0, 0, 0, 0, 0, 0, 0,
		   12,12,12,12,12,12,12,12,
			9, 9, 9, 9, 9, 9, 9, 9,
			6, 6, 6,20,20, 6, 6, 6,
			3, 3, 3,30,30, 3, 3, 3,
			0, 0, 0, 5, 5, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
		}
	},
	//char knightPositionsValues[2][64] =
	{
		{
			-50,-40,-30,-30,-30,-30,-40,-50,
			-40,-20,  0,  5,  5,  0,-20,-40,
			-30,  5, 10, 15, 15, 10,  5,-30,
			-30,  0, 15, 20, 20, 15,  0,-30,
			-30,  5, 15, 20, 20, 15,  5,-30,
			-30,  0, 10, 15, 15, 10,  0,-30,
			-40,-20,  0,  0,  0,  0,-20,-40,
			-50,-40,-30,-30,-30,-30,-40,-50
		},{
			-50,-40,-30,-30,-30,-30,-40,-50,
			-40,-20,  0,  0,  0,  0,-20,-40,
			-30,  0, 10, 15, 15, 10,  0,-30,
			-30,  5, 15, 20, 20, 15,  5,-30,
			-30,  0, 15, 20, 20, 15,  0,-30,
			-30,  5, 10, 15, 15, 10,  5,-30,
			-40,-20,  0,  5,  5,  0,-20,-40,
			-50,-40,-30,-30,-30,-30,-40,-50
		}
	},
	//filler for kings. they depend on age of game. i.e. end game
	{
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, }
	}
};

//[middle or end][side][square]
short KingPositionValueMatrix[2][2][64] = {
	//kingMiddleGamePositionValues[2][64] =
	{
		{
			 20, 30, 10,  0,  0, 10, 30, 20,
			 20, 20,  0,  0,  0,  0, 20, 20,
			-10,-20,-20,-20,-20,-20,-20,-10,
			-20,-30,-30,-40,-40,-30,-30,-20,
			-30,-40,-40,-50,-50,-40,-40,-30,
			-30,-40,-40,-50,-50,-40,-40,-30,
			-30,-40,-40,-50,-50,-40,-40,-30,
			-30,-40,-40,-50,-50,-40,-40,-30
		},
		{
			-30,-40,-40,-50,-50,-40,-40,-30,
			-30,-40,-40,-50,-50,-40,-40,-30,
			-30,-40,-40,-50,-50,-40,-40,-30,
			-30,-40,-40,-50,-50,-40,-40,-30,
			-20,-30,-30,-40,-40,-30,-30,-20,
			-10,-20,-20,-20,-20,-20,-20,-10,
			 20, 20,  0,  0,  0,  0, 20, 20,
			 20, 30, 10,  0,  0, 10, 30, 20
		}
	},
	//kingEndGamePositionValues[2][64] = 
	{
		{
			-40,-30,-30,-30,-30,-30,-30,-40,
			-30,-30,  0,  0,  0,  0,-30,-30,
			-30,-10, 20, 30, 30, 20,-10,-30,
			-30,-10, 30, 40, 40, 30,-10,-30,
			-30,-10, 30, 40, 40, 30,-10,-30,
			-30,-10, 20, 30, 30, 20,-10,-30,
			-30,-20,-10,  0,  0,-10,-20,-30,
			-40,-30,-30,-20,-20,-30,-30,-40
		},{
			-40,-30,-30,-20,-20,-30,-30,-40,
			-30,-20,-10,  0,  0,-10,-20,-30,
			-30,-10, 20, 30, 30, 20,-10,-30,
			-30,-10, 30, 40, 40, 30,-10,-30,
			-30,-10, 30, 40, 40, 30,-10,-30,
			-30,-10, 20, 30, 30, 20,-10,-30,
			-30,-30,  0,  0,  0,  0,-30,-30,
			-40,-30,-30,-30,-30,-30,-30,-40
		}
	}
};

short CastlingPoints[2] = { -40, 40 };


short OpenRookFile(int square, Game* game) {
	int file = square % 8;
	short open = 30;
	for (int i = 0; i < 7; i++)
	{
		file += 8;
		if ((game->Squares[file] & PAWN)) //smi open
			open -= 15;
	}
	return open;
}

short DoublePawns(int square, Game* game, PieceType pawn) {
	int file = square % 8;
	short score = -9; //Always one pawn
	for (int i = 0; i < 7; i++)
	{
		file += 8;
		if ((game->Squares[file] == pawn)) //smi open
			score += 9;
	}
	return score;
}

bool DrawByRepetition(Game* game) {
	if (game->PositionHistoryLength < 50) //This draw can happen early also
		return false;
	int start = game->PositionHistoryLength - 10; //Only checking back some moves. Possible to miss repetions but must be very rare.
	int end = game->PositionHistoryLength - (int)2;
	for (size_t i = start; i < end; i++)
	{
		if (game->Hash == game->PositionHistory[i]) //Simplyfying to 1 fold. Should not by an disadvantage.
			return true;
	}
	return false;

	// todo 50 move rule.
}

short GetMoveScore(Game* game) {
	return game->Material[0] + game->Material[1] + game->PositionScore;
}

short KingExposed(int square, Game* game, PieceType side) {

	if (game->Material[(side >> 4) ^ 1] < 1500)
		return 0;
	short score = 0;
	short squareScores[] = { 5, 10, 5 };
	// om kungen st�r l�ngst bak
	// po�ng f�r placeringen tas om hand av lookups
	if (side == BLACK) {
		if (square < 56)
			return 0;
		for (size_t s = 0; s < 2; s++)
		{

		}
		if (game->Squares[square - 8] == NOPIECE)
			score += 10;
	}
	else { // WHITE
		if (square > 7)
			return 0;

	}
	// om motspelaren har minst 1500 material och ingen dam b�r det st� en bonde framf�r.
	// 10 p f�r rutan framf�r tom
	// 5p f�r diagonalerna tomo
}

short GetEval(Game* game, short moveScore) {

	int score = moveScore;
	int neg = -1;
	for (size_t s = 0; s < 2; s++)
	{
		for (size_t p = 0; p < 16; p++)
		{
			Piece piece = game->Pieces[s][p];
			if (piece.Off)
				continue;
			int i = piece.SquareIndex;
			PieceType pieceType = piece.Type;
			PieceType color = pieceType & (BLACK | WHITE);
			PieceType pt = pieceType & 7;

			switch (pt)
			{
			case ROOK:
			{
				score += neg * OpenRookFile(i, game);
				// todo connected rooks, no king between
			}
			//case BISHOP:
			//{
			//	//todo: bad bishops

			//	//outposts, protected by a pawn?
			//}
			//case KNIGHT: {
			//	//outposts, protected by a pawn?
			//}
			case PAWN: {
				score -= neg * DoublePawns(i, game, pieceType);

				// passed pawns
			}
			case KING: {
				score -= neg * KingExposed(i, game, color);

			}
			default:
				break;
			}
		}
		neg += 2; // -1 >>> 1
	}
	return score;

}