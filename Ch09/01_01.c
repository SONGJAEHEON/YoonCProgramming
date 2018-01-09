#include <stdio.h>

int big(int,int,int);
int small(int,int,int);

int main(void){
	int num1, num2, num3;
	printf("Insert 3 integers.\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("biggest number is %d\n",big(num1,num2,num3));
	printf("smalles number is %d\n",small(num1,num2,num3));
	return 0;
}

int big(int n1, int n2, int n3){
	int a;
	a=n1;
	if (a>n2){
		if(a<n3)a=n3;
	}
	else if(a<=n2){
		a=n2;
		if(a<=n3)a=n3;
	}
	return a;
}
int small(int n1, int n2, int n3){
	int a;
	a=n1;
	if(a>n2){
		a=n2;
		if(a>n3)a=n3;
	}
	else if(a<=n2){
		if(a>n3)a=n3;
	}
	return a;
}
