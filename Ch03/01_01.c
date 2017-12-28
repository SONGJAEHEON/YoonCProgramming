#include<stdio.h>

int main(void){
	int num1, num2;
	printf("Insert two Integers. ex)a b\n");
	scanf("%d %d",&num1,&num2);
	printf("minus: %d - %d = %d\n",num1, num2,num1-num2);
	printf("times: %d * %d = %d\n",num1, num2,num1*num2);
	return 0;
}
