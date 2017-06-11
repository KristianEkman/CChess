int knightPatterns[64][9] = {
	{ 2,17,10 },
	{ 3,16,18,11 },
	{ 4,17,19,8,12 },
	{ 4,18,20,9,13 },
	{ 4,19,21,10,14 },
	{ 4,20,22,11,15 },
	{ 3,21,23,12 },
	{ 2,22,13 },
	{ 3,25,2,18 },
	{ 4,24,26,3,19 },
	{ 6,25,27,0,16,4,20 },
	{ 6,26,28,1,17,5,21 },
	{ 6,27,29,2,18,6,22 },
	{ 6,28,30,3,19,7,23 },
	{ 4,29,31,4,20 },
	{ 3,30,5,21 },
	{ 4,1,33,10,26 },
	{ 6,0,32,2,34,11,27 },
	{ 8,1,33,3,35,8,24,12,28 },
	{ 8,2,34,4,36,9,25,13,29 },
	{ 8,3,35,5,37,10,26,14,30 },
	{ 8,4,36,6,38,11,27,15,31 },
	{ 6,5,37,7,39,12,28 },
	{ 4,6,38,13,29 },
	{ 4,9,41,18,34 },
	{ 6,8,40,10,42,19,35 },
	{ 8,9,41,11,43,16,32,20,36 },
	{ 8,10,42,12,44,17,33,21,37 },
	{ 8,11,43,13,45,18,34,22,38 },
	{ 8,12,44,14,46,19,35,23,39 },
	{ 6,13,45,15,47,20,36 },
	{ 4,14,46,21,37 },
	{ 4,17,49,26,42 },
	{ 6,16,48,18,50,27,43 },
	{ 8,17,49,19,51,24,40,28,44 },
	{ 8,18,50,20,52,25,41,29,45 },
	{ 8,19,51,21,53,26,42,30,46 },
	{ 8,20,52,22,54,27,43,31,47 },
	{ 6,21,53,23,55,28,44 },
	{ 4,22,54,29,45 },
	{ 4,25,57,34,50 },
	{ 6,24,56,26,58,35,51 },
	{ 8,25,57,27,59,32,48,36,52 },
	{ 8,26,58,28,60,33,49,37,53 },
	{ 8,27,59,29,61,34,50,38,54 },
	{ 8,28,60,30,62,35,51,39,55 },
	{ 6,29,61,31,63,36,52 },
	{ 4,30,62,37,53 },
	{ 3,33,42,58 },
	{ 4,32,34,43,59 },
	{ 6,33,35,40,56,44,60 },
	{ 6,34,36,41,57,45,61 },
	{ 6,35,37,42,58,46,62 },
	{ 6,36,38,43,59,47,63 },
	{ 4,37,39,44,60 },
	{ 3,38,45,61 },
	{ 2,41,50 },
	{ 3,40,42,51 },
	{ 4,41,43,48,52 },
	{ 4,42,44,49,53 },
	{ 4,43,45,50,54 },
	{ 4,44,46,51,55 },
	{ 3,45,47,52 },
	{ 2,46,53 }
};

int kingPatterns[64][9] = {
	{ 3,8,1,9 },
	{ 5,0,8,9,2,10 },
	{ 5,1,9,10,3,11 },
	{ 5,2,10,11,4,12 },
	{ 5,3,11,12,5,13 },
	{ 5,4,12,13,6,14 },
	{ 5,5,13,14,7,15 },
	{ 3,6,14,15 },
	{ 5,0,16,1,9,17 },
	{ 8,0,8,16,1,17,2,10,18 },
	{ 8,1,9,17,2,18,3,11,19 },
	{ 8,2,10,18,3,19,4,12,20 },
	{ 8,3,11,19,4,20,5,13,21 },
	{ 8,4,12,20,5,21,6,14,22 },
	{ 8,5,13,21,6,22,7,15,23 },
	{ 5,6,14,22,7,23 },
	{ 5,8,24,9,17,25 },
	{ 8,8,16,24,9,25,10,18,26 },
	{ 8,9,17,25,10,26,11,19,27 },
	{ 8,10,18,26,11,27,12,20,28 },
	{ 8,11,19,27,12,28,13,21,29 },
	{ 8,12,20,28,13,29,14,22,30 },
	{ 8,13,21,29,14,30,15,23,31 },
	{ 5,14,22,30,15,31 },
	{ 5,16,32,17,25,33 },
	{ 8,16,24,32,17,33,18,26,34 },
	{ 8,17,25,33,18,34,19,27,35 },
	{ 8,18,26,34,19,35,20,28,36 },
	{ 8,19,27,35,20,36,21,29,37 },
	{ 8,20,28,36,21,37,22,30,38 },
	{ 8,21,29,37,22,38,23,31,39 },
	{ 5,22,30,38,23,39 },
	{ 5,24,40,25,33,41 },
	{ 8,24,32,40,25,41,26,34,42 },
	{ 8,25,33,41,26,42,27,35,43 },
	{ 8,26,34,42,27,43,28,36,44 },
	{ 8,27,35,43,28,44,29,37,45 },
	{ 8,28,36,44,29,45,30,38,46 },
	{ 8,29,37,45,30,46,31,39,47 },
	{ 5,30,38,46,31,47 },
	{ 5,32,48,33,41,49 },
	{ 8,32,40,48,33,49,34,42,50 },
	{ 8,33,41,49,34,50,35,43,51 },
	{ 8,34,42,50,35,51,36,44,52 },
	{ 8,35,43,51,36,52,37,45,53 },
	{ 8,36,44,52,37,53,38,46,54 },
	{ 8,37,45,53,38,54,39,47,55 },
	{ 5,38,46,54,39,55 },
	{ 5,40,56,41,49,57 },
	{ 8,40,48,56,41,57,42,50,58 },
	{ 8,41,49,57,42,58,43,51,59 },
	{ 8,42,50,58,43,59,44,52,60 },
	{ 8,43,51,59,44,60,45,53,61 },
	{ 8,44,52,60,45,61,46,54,62 },
	{ 8,45,53,61,46,62,47,55,63 },
	{ 5,46,54,62,47,63 },
	{ 3,48,49,57 },
	{ 5,48,56,49,50,58 },
	{ 5,49,57,50,51,59 },
	{ 5,50,58,51,52,60 },
	{ 5,51,59,52,53,61 },
	{ 5,52,60,53,54,62 },
	{ 5,53,61,54,55,63 },
	{ 3,54,62,55 }
};

int blackPawnCapturePatterns[64][3] = {
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 1,1 },
	{ 2,0,2 },
	{ 2,1,3 },
	{ 2,2,4 },
	{ 2,3,5 },
	{ 2,4,6 },
	{ 2,5,7 },
	{ 1,6 },
	{ 1,9 },
	{ 2,8,10 },
	{ 2,9,11 },
	{ 2,10,12 },
	{ 2,11,13 },
	{ 2,12,14 },
	{ 2,13,15 },
	{ 1,14 },
	{ 1,17 },
	{ 2,16,18 },
	{ 2,17,19 },
	{ 2,18,20 },
	{ 2,19,21 },
	{ 2,20,22 },
	{ 2,21,23 },
	{ 1,22 },
	{ 1,25 },
	{ 2,24,26 },
	{ 2,25,27 },
	{ 2,26,28 },
	{ 2,27,29 },
	{ 2,28,30 },
	{ 2,29,31 },
	{ 1,30 },
	{ 1,33 },
	{ 2,32,34 },
	{ 2,33,35 },
	{ 2,34,36 },
	{ 2,35,37 },
	{ 2,36,38 },
	{ 2,37,39 },
	{ 1,38 },
	{ 1,41 },
	{ 2,40,42 },
	{ 2,41,43 },
	{ 2,42,44 },
	{ 2,43,45 },
	{ 2,44,46 },
	{ 2,45,47 },
	{ 1,46 },
	{ 1,49 },
	{ 2,48,50 },
	{ 2,49,51 },
	{ 2,50,52 },
	{ 2,51,53 },
	{ 2,52,54 },
	{ 2,53,55 },
	{ 1,54 }
};

int blackPawnPatterns[64][3] = {
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 1,0 },
	{ 1,1 },
	{ 1,2 },
	{ 1,3 },
	{ 1,4 },
	{ 1,5 },
	{ 1,6 },
	{ 1,7 },
	{ 1,8 },
	{ 1,9 },
	{ 1,10 },
	{ 1,11 },
	{ 1,12 },
	{ 1,13 },
	{ 1,14 },
	{ 1,15 },
	{ 1,16 },
	{ 1,17 },
	{ 1,18 },
	{ 1,19 },
	{ 1,20 },
	{ 1,21 },
	{ 1,22 },
	{ 1,23 },
	{ 1,24 },
	{ 1,25 },
	{ 1,26 },
	{ 1,27 },
	{ 1,28 },
	{ 1,29 },
	{ 1,30 },
	{ 1,31 },
	{ 1,32 },
	{ 1,33 },
	{ 1,34 },
	{ 1,35 },
	{ 1,36 },
	{ 1,37 },
	{ 1,38 },
	{ 1,39 },
	{ 2,40,32 },
	{ 2,41,33 },
	{ 2,42,34 },
	{ 2,43,35 },
	{ 2,44,36 },
	{ 2,45,37 },
	{ 2,46,38 },
	{ 2,47,39 },
	{ 1,48 },
	{ 1,49 },
	{ 1,50 },
	{ 1,51 },
	{ 1,52 },
	{ 1,53 },
	{ 1,54 },
	{ 1,55 }
};

int whitePawnCapturePatterns[64][3] = {
	{ 1,9 },
	{ 2,8,10 },
	{ 2,9,11 },
	{ 2,10,12 },
	{ 2,11,13 },
	{ 2,12,14 },
	{ 2,13,15 },
	{ 1,14 },
	{ 1,17 },
	{ 2,16,18 },
	{ 2,17,19 },
	{ 2,18,20 },
	{ 2,19,21 },
	{ 2,20,22 },
	{ 2,21,23 },
	{ 1,22 },
	{ 1,25 },
	{ 2,24,26 },
	{ 2,25,27 },
	{ 2,26,28 },
	{ 2,27,29 },
	{ 2,28,30 },
	{ 2,29,31 },
	{ 1,30 },
	{ 1,33 },
	{ 2,32,34 },
	{ 2,33,35 },
	{ 2,34,36 },
	{ 2,35,37 },
	{ 2,36,38 },
	{ 2,37,39 },
	{ 1,38 },
	{ 1,41 },
	{ 2,40,42 },
	{ 2,41,43 },
	{ 2,42,44 },
	{ 2,43,45 },
	{ 2,44,46 },
	{ 2,45,47 },
	{ 1,46 },
	{ 1,49 },
	{ 2,48,50 },
	{ 2,49,51 },
	{ 2,50,52 },
	{ 2,51,53 },
	{ 2,52,54 },
	{ 2,53,55 },
	{ 1,54 },
	{ 1,57 },
	{ 2,56,58 },
	{ 2,57,59 },
	{ 2,58,60 },
	{ 2,59,61 },
	{ 2,60,62 },
	{ 2,61,63 },
	{ 1,62 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 }
};

int whitePawnPatterns[64][3] = {
	{ 1,8 },
	{ 1,9 },
	{ 1,10 },
	{ 1,11 },
	{ 1,12 },
	{ 1,13 },
	{ 1,14 },
	{ 1,15 },
	{ 2,16,24 },
	{ 2,17,25 },
	{ 2,18,26 },
	{ 2,19,27 },
	{ 2,20,28 },
	{ 2,21,29 },
	{ 2,22,30 },
	{ 2,23,31 },
	{ 1,24 },
	{ 1,25 },
	{ 1,26 },
	{ 1,27 },
	{ 1,28 },
	{ 1,29 },
	{ 1,30 },
	{ 1,31 },
	{ 1,32 },
	{ 1,33 },
	{ 1,34 },
	{ 1,35 },
	{ 1,36 },
	{ 1,37 },
	{ 1,38 },
	{ 1,39 },
	{ 1,40 },
	{ 1,41 },
	{ 1,42 },
	{ 1,43 },
	{ 1,44 },
	{ 1,45 },
	{ 1,46 },
	{ 1,47 },
	{ 1,48 },
	{ 1,49 },
	{ 1,50 },
	{ 1,51 },
	{ 1,52 },
	{ 1,53 },
	{ 1,54 },
	{ 1,55 },
	{ 1,56 },
	{ 1,57 },
	{ 1,58 },
	{ 1,59 },
	{ 1,60 },
	{ 1,61 },
	{ 1,62 },
	{ 1,63 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 }
};

int eastRayPatterns[64][8] = {
	{ 7,1,2,3,4,5,6,7 },
	{ 6,2,3,4,5,6,7 },
	{ 5,3,4,5,6,7 },
	{ 4,4,5,6,7 },
	{ 3,5,6,7 },
	{ 2,6,7 },
	{ 1,7 },
	{ 0 },
	{ 7,9,10,11,12,13,14,15 },
	{ 6,10,11,12,13,14,15 },
	{ 5,11,12,13,14,15 },
	{ 4,12,13,14,15 },
	{ 3,13,14,15 },
	{ 2,14,15 },
	{ 1,15 },
	{ 0 },
	{ 7,17,18,19,20,21,22,23 },
	{ 6,18,19,20,21,22,23 },
	{ 5,19,20,21,22,23 },
	{ 4,20,21,22,23 },
	{ 3,21,22,23 },
	{ 2,22,23 },
	{ 1,23 },
	{ 0 },
	{ 7,25,26,27,28,29,30,31 },
	{ 6,26,27,28,29,30,31 },
	{ 5,27,28,29,30,31 },
	{ 4,28,29,30,31 },
	{ 3,29,30,31 },
	{ 2,30,31 },
	{ 1,31 },
	{ 0 },
	{ 7,33,34,35,36,37,38,39 },
	{ 6,34,35,36,37,38,39 },
	{ 5,35,36,37,38,39 },
	{ 4,36,37,38,39 },
	{ 3,37,38,39 },
	{ 2,38,39 },
	{ 1,39 },
	{ 0 },
	{ 7,41,42,43,44,45,46,47 },
	{ 6,42,43,44,45,46,47 },
	{ 5,43,44,45,46,47 },
	{ 4,44,45,46,47 },
	{ 3,45,46,47 },
	{ 2,46,47 },
	{ 1,47 },
	{ 0 },
	{ 7,49,50,51,52,53,54,55 },
	{ 6,50,51,52,53,54,55 },
	{ 5,51,52,53,54,55 },
	{ 4,52,53,54,55 },
	{ 3,53,54,55 },
	{ 2,54,55 },
	{ 1,55 },
	{ 0 },
	{ 7,57,58,59,60,61,62,63 },
	{ 6,58,59,60,61,62,63 },
	{ 5,59,60,61,62,63 },
	{ 4,60,61,62,63 },
	{ 3,61,62,63 },
	{ 2,62,63 },
	{ 1,63 },
	{ 0 }
};

int northEastRayPatterns[64][8] = {
	{ 7,9,18,27,36,45,54,63 },
	{ 6,10,19,28,37,46,55 },
	{ 5,11,20,29,38,47 },
	{ 4,12,21,30,39 },
	{ 3,13,22,31 },
	{ 2,14,23 },
	{ 1,15 },
	{ 0 },
	{ 6,17,26,35,44,53,62 },
	{ 6,18,27,36,45,54,63 },
	{ 5,19,28,37,46,55 },
	{ 4,20,29,38,47 },
	{ 3,21,30,39 },
	{ 2,22,31 },
	{ 1,23 },
	{ 0 },
	{ 5,25,34,43,52,61 },
	{ 5,26,35,44,53,62 },
	{ 5,27,36,45,54,63 },
	{ 4,28,37,46,55 },
	{ 3,29,38,47 },
	{ 2,30,39 },
	{ 1,31 },
	{ 0 },
	{ 4,33,42,51,60 },
	{ 4,34,43,52,61 },
	{ 4,35,44,53,62 },
	{ 4,36,45,54,63 },
	{ 3,37,46,55 },
	{ 2,38,47 },
	{ 1,39 },
	{ 0 },
	{ 3,41,50,59 },
	{ 3,42,51,60 },
	{ 3,43,52,61 },
	{ 3,44,53,62 },
	{ 3,45,54,63 },
	{ 2,46,55 },
	{ 1,47 },
	{ 0 },
	{ 2,49,58 },
	{ 2,50,59 },
	{ 2,51,60 },
	{ 2,52,61 },
	{ 2,53,62 },
	{ 2,54,63 },
	{ 1,55 },
	{ 0 },
	{ 1,57 },
	{ 1,58 },
	{ 1,59 },
	{ 1,60 },
	{ 1,61 },
	{ 1,62 },
	{ 1,63 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 }
};

int northRayPatterns[64][8] = {
	{ 7,8,16,24,32,40,48,56 },
	{ 7,9,17,25,33,41,49,57 },
	{ 7,10,18,26,34,42,50,58 },
	{ 7,11,19,27,35,43,51,59 },
	{ 7,12,20,28,36,44,52,60 },
	{ 7,13,21,29,37,45,53,61 },
	{ 7,14,22,30,38,46,54,62 },
	{ 7,15,23,31,39,47,55,63 },
	{ 6,16,24,32,40,48,56 },
	{ 6,17,25,33,41,49,57 },
	{ 6,18,26,34,42,50,58 },
	{ 6,19,27,35,43,51,59 },
	{ 6,20,28,36,44,52,60 },
	{ 6,21,29,37,45,53,61 },
	{ 6,22,30,38,46,54,62 },
	{ 6,23,31,39,47,55,63 },
	{ 5,24,32,40,48,56 },
	{ 5,25,33,41,49,57 },
	{ 5,26,34,42,50,58 },
	{ 5,27,35,43,51,59 },
	{ 5,28,36,44,52,60 },
	{ 5,29,37,45,53,61 },
	{ 5,30,38,46,54,62 },
	{ 5,31,39,47,55,63 },
	{ 4,32,40,48,56 },
	{ 4,33,41,49,57 },
	{ 4,34,42,50,58 },
	{ 4,35,43,51,59 },
	{ 4,36,44,52,60 },
	{ 4,37,45,53,61 },
	{ 4,38,46,54,62 },
	{ 4,39,47,55,63 },
	{ 3,40,48,56 },
	{ 3,41,49,57 },
	{ 3,42,50,58 },
	{ 3,43,51,59 },
	{ 3,44,52,60 },
	{ 3,45,53,61 },
	{ 3,46,54,62 },
	{ 3,47,55,63 },
	{ 2,48,56 },
	{ 2,49,57 },
	{ 2,50,58 },
	{ 2,51,59 },
	{ 2,52,60 },
	{ 2,53,61 },
	{ 2,54,62 },
	{ 2,55,63 },
	{ 1,56 },
	{ 1,57 },
	{ 1,58 },
	{ 1,59 },
	{ 1,60 },
	{ 1,61 },
	{ 1,62 },
	{ 1,63 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 }
};

int northWestPatterns[64][8] = {
	{ 0 },
	{ 1,8 },
	{ 2,9,16 },
	{ 3,10,17,24 },
	{ 4,11,18,25,32 },
	{ 5,12,19,26,33,40 },
	{ 6,13,20,27,34,41,48 },
	{ 7,14,21,28,35,42,49,56 },
	{ 0 },
	{ 1,16 },
	{ 2,17,24 },
	{ 3,18,25,32 },
	{ 4,19,26,33,40 },
	{ 5,20,27,34,41,48 },
	{ 6,21,28,35,42,49,56 },
	{ 6,22,29,36,43,50,57 },
	{ 0 },
	{ 1,24 },
	{ 2,25,32 },
	{ 3,26,33,40 },
	{ 4,27,34,41,48 },
	{ 5,28,35,42,49,56 },
	{ 5,29,36,43,50,57 },
	{ 5,30,37,44,51,58 },
	{ 0 },
	{ 1,32 },
	{ 2,33,40 },
	{ 3,34,41,48 },
	{ 4,35,42,49,56 },
	{ 4,36,43,50,57 },
	{ 4,37,44,51,58 },
	{ 4,38,45,52,59 },
	{ 0 },
	{ 1,40 },
	{ 2,41,48 },
	{ 3,42,49,56 },
	{ 3,43,50,57 },
	{ 3,44,51,58 },
	{ 3,45,52,59 },
	{ 3,46,53,60 },
	{ 0 },
	{ 1,48 },
	{ 2,49,56 },
	{ 2,50,57 },
	{ 2,51,58 },
	{ 2,52,59 },
	{ 2,53,60 },
	{ 2,54,61 },
	{ 0 },
	{ 1,56 },
	{ 1,57 },
	{ 1,58 },
	{ 1,59 },
	{ 1,60 },
	{ 1,61 },
	{ 1,62 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 }
};

int southEastRayPatterns[64][8] = {
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 1,1 },
	{ 1,2 },
	{ 1,3 },
	{ 1,4 },
	{ 1,5 },
	{ 1,6 },
	{ 1,7 },
	{ 0 },
	{ 2,9,2 },
	{ 2,10,3 },
	{ 2,11,4 },
	{ 2,12,5 },
	{ 2,13,6 },
	{ 2,14,7 },
	{ 1,15 },
	{ 0 },
	{ 3,17,10,3 },
	{ 3,18,11,4 },
	{ 3,19,12,5 },
	{ 3,20,13,6 },
	{ 3,21,14,7 },
	{ 2,22,15 },
	{ 1,23 },
	{ 0 },
	{ 4,25,18,11,4 },
	{ 4,26,19,12,5 },
	{ 4,27,20,13,6 },
	{ 4,28,21,14,7 },
	{ 3,29,22,15 },
	{ 2,30,23 },
	{ 1,31 },
	{ 0 },
	{ 5,33,26,19,12,5 },
	{ 5,34,27,20,13,6 },
	{ 5,35,28,21,14,7 },
	{ 4,36,29,22,15 },
	{ 3,37,30,23 },
	{ 2,38,31 },
	{ 1,39 },
	{ 0 },
	{ 6,41,34,27,20,13,6 },
	{ 6,42,35,28,21,14,7 },
	{ 5,43,36,29,22,15 },
	{ 4,44,37,30,23 },
	{ 3,45,38,31 },
	{ 2,46,39 },
	{ 1,47 },
	{ 0 },
	{ 7,49,42,35,28,21,14,7 },
	{ 6,50,43,36,29,22,15 },
	{ 5,51,44,37,30,23 },
	{ 4,52,45,38,31 },
	{ 3,53,46,39 },
	{ 2,54,47 },
	{ 1,55 },
	{ 0 }
};

int southRayPatterns[64][8] = {
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 1,0 },
	{ 1,1 },
	{ 1,2 },
	{ 1,3 },
	{ 1,4 },
	{ 1,5 },
	{ 1,6 },
	{ 1,7 },
	{ 2,8,0 },
	{ 2,9,1 },
	{ 2,10,2 },
	{ 2,11,3 },
	{ 2,12,4 },
	{ 2,13,5 },
	{ 2,14,6 },
	{ 2,15,7 },
	{ 3,16,8,0 },
	{ 3,17,9,1 },
	{ 3,18,10,2 },
	{ 3,19,11,3 },
	{ 3,20,12,4 },
	{ 3,21,13,5 },
	{ 3,22,14,6 },
	{ 3,23,15,7 },
	{ 4,24,16,8,0 },
	{ 4,25,17,9,1 },
	{ 4,26,18,10,2 },
	{ 4,27,19,11,3 },
	{ 4,28,20,12,4 },
	{ 4,29,21,13,5 },
	{ 4,30,22,14,6 },
	{ 4,31,23,15,7 },
	{ 5,32,24,16,8,0 },
	{ 5,33,25,17,9,1 },
	{ 5,34,26,18,10,2 },
	{ 5,35,27,19,11,3 },
	{ 5,36,28,20,12,4 },
	{ 5,37,29,21,13,5 },
	{ 5,38,30,22,14,6 },
	{ 5,39,31,23,15,7 },
	{ 6,40,32,24,16,8,0 },
	{ 6,41,33,25,17,9,1 },
	{ 6,42,34,26,18,10,2 },
	{ 6,43,35,27,19,11,3 },
	{ 6,44,36,28,20,12,4 },
	{ 6,45,37,29,21,13,5 },
	{ 6,46,38,30,22,14,6 },
	{ 6,47,39,31,23,15,7 },
	{ 7,48,40,32,24,16,8,0 },
	{ 7,49,41,33,25,17,9,1 },
	{ 7,50,42,34,26,18,10,2 },
	{ 7,51,43,35,27,19,11,3 },
	{ 7,52,44,36,28,20,12,4 },
	{ 7,53,45,37,29,21,13,5 },
	{ 7,54,46,38,30,22,14,6 },
	{ 7,55,47,39,31,23,15,7 }
};

int southWestPatterns[64][8] = {
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 1,0 },
	{ 1,1 },
	{ 1,2 },
	{ 1,3 },
	{ 1,4 },
	{ 1,5 },
	{ 1,6 },
	{ 0 },
	{ 1,8 },
	{ 2,9,0 },
	{ 2,10,1 },
	{ 2,11,2 },
	{ 2,12,3 },
	{ 2,13,4 },
	{ 2,14,5 },
	{ 0 },
	{ 1,16 },
	{ 2,17,8 },
	{ 3,18,9,0 },
	{ 3,19,10,1 },
	{ 3,20,11,2 },
	{ 3,21,12,3 },
	{ 3,22,13,4 },
	{ 0 },
	{ 1,24 },
	{ 2,25,16 },
	{ 3,26,17,8 },
	{ 4,27,18,9,0 },
	{ 4,28,19,10,1 },
	{ 4,29,20,11,2 },
	{ 4,30,21,12,3 },
	{ 0 },
	{ 1,32 },
	{ 2,33,24 },
	{ 3,34,25,16 },
	{ 4,35,26,17,8 },
	{ 5,36,27,18,9,0 },
	{ 5,37,28,19,10,1 },
	{ 5,38,29,20,11,2 },
	{ 0 },
	{ 1,40 },
	{ 2,41,32 },
	{ 3,42,33,24 },
	{ 4,43,34,25,16 },
	{ 5,44,35,26,17,8 },
	{ 6,45,36,27,18,9,0 },
	{ 6,46,37,28,19,10,1 },
	{ 0 },
	{ 1,48 },
	{ 2,49,40 },
	{ 3,50,41,32 },
	{ 4,51,42,33,24 },
	{ 5,52,43,34,25,16 },
	{ 6,53,44,35,26,17,8 },
	{ 7,54,45,36,27,18,9,0 }
};

int westPatterns[64][8] = {
	{ 0 },
	{ 1,0 },
	{ 2,1,0 },
	{ 3,2,1,0 },
	{ 4,3,2,1,0 },
	{ 5,4,3,2,1,0 },
	{ 6,5,4,3,2,1,0 },
	{ 7,6,5,4,3,2,1,0 },
	{ 0 },
	{ 1,8 },
	{ 2,9,8 },
	{ 3,10,9,8 },
	{ 4,11,10,9,8 },
	{ 5,12,11,10,9,8 },
	{ 6,13,12,11,10,9,8 },
	{ 7,14,13,12,11,10,9,8 },
	{ 0 },
	{ 1,16 },
	{ 2,17,16 },
	{ 3,18,17,16 },
	{ 4,19,18,17,16 },
	{ 5,20,19,18,17,16 },
	{ 6,21,20,19,18,17,16 },
	{ 7,22,21,20,19,18,17,16 },
	{ 0 },
	{ 1,24 },
	{ 2,25,24 },
	{ 3,26,25,24 },
	{ 4,27,26,25,24 },
	{ 5,28,27,26,25,24 },
	{ 6,29,28,27,26,25,24 },
	{ 7,30,29,28,27,26,25,24 },
	{ 0 },
	{ 1,32 },
	{ 2,33,32 },
	{ 3,34,33,32 },
	{ 4,35,34,33,32 },
	{ 5,36,35,34,33,32 },
	{ 6,37,36,35,34,33,32 },
	{ 7,38,37,36,35,34,33,32 },
	{ 0 },
	{ 1,40 },
	{ 2,41,40 },
	{ 3,42,41,40 },
	{ 4,43,42,41,40 },
	{ 5,44,43,42,41,40 },
	{ 6,45,44,43,42,41,40 },
	{ 7,46,45,44,43,42,41,40 },
	{ 0 },
	{ 1,48 },
	{ 2,49,48 },
	{ 3,50,49,48 },
	{ 4,51,50,49,48 },
	{ 5,52,51,50,49,48 },
	{ 6,53,52,51,50,49,48 },
	{ 7,54,53,52,51,50,49,48 },
	{ 0 },
	{ 1,56 },
	{ 2,57,56 },
	{ 3,58,57,56 },
	{ 4,59,58,57,56 },
	{ 5,60,59,58,57,56 },
	{ 6,61,60,59,58,57,56 },
	{ 7,62,61,60,59,58,57,56 }
};

int emptyPattern[1] = { 0 };
int emptyRayPattern[1][1] = {{0}};

