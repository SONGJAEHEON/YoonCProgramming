#include <stdio.h>

void square(int *){
	*n=n*n;
}

int main(void){
	int num;
	scanf("%d",&num);
	square(&num);
	printf("%d\n",num);
	return 0;
}
