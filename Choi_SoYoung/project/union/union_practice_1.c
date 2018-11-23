#include<stdio.h>

union file
{
	float number;
	char data[4];
}f1;

int main()
{
	f1.number = 3.14;
	
	printf("%x %x %x %x",f1.data[0],f1.data[1],f1.data[2],f1.data[3]);
}
