#include <stdio.h>

int main(void){
	int dan=1, num=1;
	for(int dan=1; dan<=8; dan++){
		if(dan%2!=0)continue;
		else{
			for(int num =1; num<=dan; num++){
			if(num>dan)break;
			else{
			printf("%d * %d = %d\n",dan,num,dan*num);
			}
			}
		}
	}
	return 0;
}
