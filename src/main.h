#pragma once
#include "basic_structs.h"

#define SEARCH_THREADS 7
#define ASPIRATION_WINDOW_SIZE 10

void PrintGame();
void ReadFen(char * fen);
void MoveToString(Move move, char sMove[5]);
void WriteFen(char * fen);
int ValidMoves(Move * moves);
PlayerMove MakePlayerMove(char * sMove);
void UnMakePlayerMove(PlayerMove move);

Move parseMove(char * sMove, MoveInfo info);
Game mainGame;
short TotalMaterial(Game * game);
int SearchedLeafs;
void BestMoveDeepening(TopSearchParams * params);
int GetScore(Game * game);
short GetBestScore(Game * game, int depth);
void CreateMoves(Game * game, int depth);
void MakeMove(Move move, Game * mainGame);
void UnMakeMove(Move move,PieceType capture,GameState prevGameState, int prevPositionScore, Game * game, unsigned long long prevHash);
const int MOVESIZE;

void SwitchSignOfWhitePositionValue();
void InitGame();
void EnterUciMode();
int EnterInteractiveMode();
void InitHash();
Move Search(int maxDepth, int seconds, bool async);
