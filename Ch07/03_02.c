#include <stdio.h>

int main(void){
	int n=1, sum=0;
	while(n<101){
		if(n%2==0)sum+=n;
		n++;
	}
	printf("total(2+4+6+...+100): %d ",sum);
	return 0;
}
