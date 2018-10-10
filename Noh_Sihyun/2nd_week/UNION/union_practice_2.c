#include <stdio.h>

union data
{
	float pie;
	char temp[4];  
};
	
int main()
{
	union data PIE;
	PIE.temp[0] = 0xffffffc3; 
	PIE.temp[1] = 0xfffffff5;
	PIE.temp[2] = 0x48;
	PIE.temp[3] = 0x40;	
	printf("%.2f ", PIE.pie);
}
