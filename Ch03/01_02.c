#include<stdio.h>

int main(void){
	int n1, n2, n3;
	printf("Insert 3 Integers. ex)a b c\n");
	scanf("%d %d %d\n",&n1, &n2, &n3);
	printf("%d*%d+%d=%d\n",n1,n2,n3,n1*n2+n3);
	return 0;
}

