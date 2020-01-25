#pragma once
#include "basic_structs.h"
#define SEARCH_THREADS 7

Game g_mainGame;
uint g_SearchedNodes;

void PrintGame(Game * game);
void ReadFen(char * fen);
void MoveToString(Move move, char sMove[5]);
void WriteFen(char * fen);
int ValidMoves(Move * moves);
PlayerMove MakePlayerMove(char * sMove);
void UnMakePlayerMove(PlayerMove move);

Move ParseMove(char * sMove, MoveInfo info);
short TotalMaterial(Game * game);
DWORD WINAPI BestMoveDeepening(void * params);
void CreateMoves(Game * game, int depth);
void RemoveInvalidMoves(Game* game);
int MakeMove(Move move, Game * mainGame);
void UnMakeMove(Move move,int captIndex,GameState prevGameState, Game * game, U64 prevHash);
void InitGame();
void InitScores();

void EnterUciMode();
int EnterInteractiveMode();
void InitScores();
void InitHash();
Move Search(bool async);
DWORD WINAPI TimeLimitWatch(void* pms);
void DefaultSearch();
void AssertGame(Game* game);
