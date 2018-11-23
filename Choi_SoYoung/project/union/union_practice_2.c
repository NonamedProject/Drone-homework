#include<stdio.h>

union file
{
	float number;
	char data[4];
}f1;

int main()
{
	f1.data[0] = 0xffffffc3; 
	f1.data[1] = 0xfffffff5;
	f1.data[2] = 0x48;
	f1.data[3] = 0x40;
	
	printf("%f",f1.number);
}
