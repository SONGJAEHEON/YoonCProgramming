#include <stdio.h>

int main(void){
	int i = 1;
	while(i<101){
		if(i%7==0 || i%9==0){
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
