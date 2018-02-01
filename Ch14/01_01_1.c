#include <stdio.h>

int square(int);

int main(void){
	int input;
	scanf("%d",&input);
	printf("%d",square(input));
	return 0; 
}

int square(int input){
	int an;
	an=input*input;
	return an;
}

