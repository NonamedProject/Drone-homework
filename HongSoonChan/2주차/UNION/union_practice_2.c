#include <stdio.h>
union change{
	float Circle_ratel;
	char data[4];
}chan;
int main(){
	chan.data[0]=0xffffffc3;
	chan.data[1]=0xfffffff5;
	chan.data[2]=0x48;
	chan.data[3]=0x40;
	
	printf("%f", chan.Circle_ratel);
}
