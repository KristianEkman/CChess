#include "basic_structs.h"
int DepthTimeHistory[1024][32];
float DepthTimeFactor;

bool SearchDeeper(int currentDepth, int moveNo, int ellapsed, int side) {
	int myTimeLeft = g_topSearchParams.BlackTimeLeft;
	int opponentTimeLeft = g_topSearchParams.WhiteTimeLeft;
	if (side == WHITE) {
		opponentTimeLeft = g_topSearchParams.BlackTimeLeft;
		myTimeLeft = g_topSearchParams.WhiteTimeLeft;
	}

	int normal = myTimeLeft / 30;
	int bonus = (float)(myTimeLeft - opponentTimeLeft) * 0.75;  //ge inte hela differensen som bonus?
	if (bonus < 0)
		bonus = 0; //t�nker alltid minst en 30 del av tiden kvar.

	int prevMaxDepth = DepthTimeHistory[moveNo - 1][0];
	int estimatedNextDepth = ellapsed * 2; // Default estimation
	if (moveNo > 0 && currentDepth > 1 && prevMaxDepth > currentDepth) {
		estimatedNextDepth = DepthTimeHistory[moveNo - 1][currentDepth + 1];
	}
	
	//Uppskattar om man hinner med ett djup till utan att komma efter motst�ndaren
	if (ellapsed + estimatedNextDepth < normal + bonus)
		return true;

	return false; 
}

void RegisterDepthTime(int moveNo, int depth, int time) {
	
	DepthTimeHistory[moveNo][depth] = time;
	DepthTimeHistory[moveNo][0] = depth;
	
	if (depth > 2)
		DepthTimeFactor = (float)DepthTimeHistory[moveNo][depth] / (float)DepthTimeHistory[moveNo][depth - 1];
	else
		DepthTimeFactor = 5;
}

void ResetDepthTimes() {
	for (int i = 0; i < 1024; i++)
		DepthTimeHistory[i][0] = 0;
}