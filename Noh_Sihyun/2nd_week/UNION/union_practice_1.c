#include <stdio.h>

union data
{
	float pie;
	char temp[4];  
};
	
int main()
{
	union data PIE;
	PIE.pie = 3.14;
	int i;
	
	for(i=0;i<4;i++)
	{
		printf("%x ", PIE.temp[i]);
	}
}
