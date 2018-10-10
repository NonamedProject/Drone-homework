#include <stdio.h>
union change{
	float Circle_ratel;
	char data[4];
}chan;
int main(){
	int i;
	chan.Circle_ratel = 3.14;
	for(i=0; i<4; i++){
		printf("0x%x\n", chan.data[i]);
	}
}
