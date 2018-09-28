#include <stdio.h>
#include <stdlib.h>

#include "Codedata.h"

unsigned char bits[20][8] = {
	{0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 1, 0},
	{1, 1, 1, 1, 1, 1, 1, 1},
	{0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0}
 };

int main(int argc, char *argv[]) {
	Code code;
	
	int i, sum = 0;
	
	code.code_bits[0] = bits[0][0] << 10 | bits[0][1] << 9 | bits[0][2] << 8 | bits[0][3] << 7 | bits[0][4] << 6 | bits[0][5] << 5 | bits[0][6] << 4 | bits[0][7] << 3 | bits[1][0] << 2 | bits[1][1] << 1 | bits[1][2] << 0;
	code.code_bits[1] = bits[1][3] << 10 | bits[1][4] << 9 | bits[1][5] << 8 | bits[1][6] << 7 | bits[1][7] << 6 | bits[2][0] << 5 | bits[2][1] << 4 | bits[2][2] << 3 | bits[2][3] << 2 | bits[2][4] << 1 | bits[2][5] << 0;
	code.code_bits[2] = bits[2][6] << 10 | bits[2][7] << 9 | bits[3][0] << 8 | bits[3][1] << 7 | bits[3][2] << 6 | bits[3][3] << 5 | bits[3][4] << 4 | bits[3][5] << 3 | bits[3][6] << 2 | bits[3][7] << 1 | bits[4][0] << 0;
	code.code_bits[3] = bits[4][1] << 10 | bits[4][2] << 9 | bits[4][3] << 8 | bits[4][4] << 7 | bits[4][5] << 6 | bits[4][6] << 5 | bits[4][7] << 4 | bits[5][0] << 3 | bits[5][1] << 2 | bits[5][2] << 1 | bits[5][3] << 0;
	code.code_bits[4] = bits[5][4] << 10 | bits[5][5] << 9 | bits[5][6] << 8 | bits[5][7] << 7 | bits[6][0] << 6 | bits[6][1] << 5 | bits[6][2] << 4 | bits[6][3] << 3 | bits[6][4] << 2 | bits[6][5] << 1 | bits[6][6] << 0;
	code.code_bits[5] = bits[6][7] << 10 | bits[7][0] << 9 | bits[7][1] << 8 | bits[7][2] << 7 | bits[7][3] << 6 | bits[7][4] << 5 | bits[7][5] << 4 | bits[7][6] << 3 | bits[7][7] << 2 | bits[8][0] << 1 | bits[8][1] << 0;
	code.code_bits[6] = bits[8][2] << 10 | bits[8][3] << 9 | bits[8][4] << 8 | bits[8][5] << 7 | bits[8][6] << 6 | bits[8][7] << 5 | bits[9][0] << 4 | bits[9][1] << 3 | bits[9][2] << 2 | bits[9][3] << 1 | bits[9][4] << 0;
	code.code_bits[7] = bits[9][5] << 10 | bits[9][6] << 9 | bits[9][7] << 8 | bits[10][0] << 7 | bits[10][1] << 6 | bits[10][2] << 5 | bits[10][3] << 4 | bits[10][4] << 3 | bits[10][5] << 2 | bits[10][6] << 1 | bits[10][7] << 0;
	
	sum += code.code_bits[0];
	sum += code.code_bits[1];
	sum += code.code_bits[2];
	sum += code.code_bits[3];
	sum += code.code_bits[4];
	sum += code.code_bits[5];
	sum += code.code_bits[6];
	sum += code.code_bits[7];
	
	
	printf("SUM >>> %d\n", sum);
	
	return 0;
}
