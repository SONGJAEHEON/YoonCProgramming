#include <stdio.h>

int main(void){
	int input, sum=0, num=0;
	printf("Insert 5 integers, which are positive.\n");
	while(num<5){
	scanf("%d\n",&input);
	while(input>0){
	sum += input;
	num++;
	input=0;
	}
	}
	printf("%d\n",sum);
	return 0;
}

