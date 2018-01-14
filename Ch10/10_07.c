#include <stdio.h>

int main(void){
	int input,num=1,cnt=-1;
	scanf("%d",&input);
	for(int i=1;num<=input;i++){
		num =num*2;
		cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}

