#include <stdio.h>
#include <string.h>

union data
{
	float pi;
	char arr[4];
}hx;

main()
{
	int i;
	hx.pi = 3.14;
		
	for(i=0; i<4; i++)
	{
		printf("%x ", hx.arr[i]);
	}
}
