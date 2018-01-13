#include <stdio.h>

int a=0, b=1, c=1,sp;

int fib(int);

int  main(void){
	int num;
	printf("How many numbers do you want to see?\n");
	scanf("%d",&num);
	for(int n=1;n<=num;n++){
		printf("%d ,",fib(n));
	}
	printf("end\n");
	return 0;
}

int fib(int n){
	c=a+b;
	sp=a;
	a=b;
	b=c;
	return sp;
}

