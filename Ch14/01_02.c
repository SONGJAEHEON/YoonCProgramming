#include <stdio.h>

void change(int*, int*, int*);

int main(void){
	int num1,num2,num3;
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	change(&num1,&num2,&num3);
	printf("num1: %d num2: %d num3: %d\n",num1,num2,num3);
	return 0;
}
void change(int *n1,int * n2, int *n3){
	int temp = *n3;
	*n3=*n2;
	*n2=*n1;
	*n1=temp;
}
