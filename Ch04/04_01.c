#include<stdio.h>

int main(void){
	int num1, num2;
	printf("Insert an Integer. ex) num\n");
	scanf("%d",&num1);
	num2=~num1+1;
	printf("%d\n",num2);
	return 0;
}
