#include <stdio.h>

int main(void){
	int num1, num2, sum=0;	
	printf("insert 2 integers.\n");
	scanf("%d\n",&num1);
	scanf("%d\n",&num2);
	for(int i = num1; i<=num2; i++){
		sum += i;
	}
	printf("total is %d\n",sum);
	return 0;
}
