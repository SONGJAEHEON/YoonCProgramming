#include <stdio.h>

int main(void){
	int n=0,nu=0,num=0;
	while(num<5){
		n=num;
		nu=0;
			while(nu<n){
			printf("O");
			nu++;
			}
		printf("*\n");
		num++;
	}
	return 0;
}
