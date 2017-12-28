#include <stdio.h>

int main(void){
	int num1, num2, num3;
	printf("Insert 3 Integers. ex)num1 num2 num3\n");
	scanf("%d %d %d\n",&num1,&num2,&num3);
	printf("(num1-num2)*(num2+num3)*(num3%%num1)=%d",(num1-num2)*(num2+num3)*(num3%num1));
	return 0;
}
