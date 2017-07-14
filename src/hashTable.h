#pragma once

#define IndexLength 0x1FFFFFF
#define SlotCount 4

unsigned long long ZobritsPieceTypesSquares[23][64];
unsigned long long ZobritsSides[2];
unsigned long long ZobritsCastlingRights[4];
unsigned long long ZobritsEnpassantFile[9];
//
//int HashTableFullCount;
//int HashTableEntries;
//int HashTableMatches;

void addEntry(unsigned long long hash, short score, char depth);
short getScoreFromHash(unsigned long long hash, bool * empty, int depth);

void GenerateZobritsKeys();
void ClearHashTable();