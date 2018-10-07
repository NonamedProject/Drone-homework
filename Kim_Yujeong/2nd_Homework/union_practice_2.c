#include <stdio.h>

union data
{
	float hx;
	char arr[4];
}dc;

main()
{
	int i, sum = 0;
	
	dc.arr[0] = 0xffffffc3;
	dc.arr[1] = 0xfffffff5;
	dc.arr[2] = 0x48;
	dc.arr[3] = 0x40;
	
	printf("%.2f", dc.hx);
}
