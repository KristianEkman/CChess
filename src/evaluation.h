#pragma once
#include "commons.h"
#include "patterns.h"

#define CASTLED 20
#define OPEN_ROOK_FILE 19
#define SEMI_OPEN_FILE 15
#define DOUBLE_PAWN 14
#define KING_EXPOSED 16
#define PASSED_PAWN 21
#define PASSED_PAWN_FREE_PATH 15
#define PAWN_PROTECT 8
#define ENDGAME 1800
#define SAME_TWICE 18
#define QUEEN_EARLY 15
#define BISHOP_PAIR 30

//[type][side][square]
short PositionValueMatrix[7][2][64];

//[side][short/long]
short CastlingPoints[2];

//[middle or end][side][square]
short KingPositionValueMatrix[2][2][64];

short OpenRookFile(int square, Game* game);

short DoublePawns(int square, Game* game, PieceType pawn);

short GetEval(Game* game);

bool IsDraw(Game* game);

short KingExposed(int square, Game* game);

short PassedPawn(int square, Game* game);

short TotalMaterial(Game* game);
void CalculatePatterns();


