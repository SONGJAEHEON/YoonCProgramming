#include <stdio.h>

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
	int a=0, b=1, c;
	if(n=1)return a;
	if(n=2)return b;
	if(n>=3){
		for(int d=3;d<=n;d++){
			c=a+b;
			a=b;
			b=c;
		}
	return c;
	}
}

