#include <stdio.h>

int main(void){
	int input,a=1;
	printf("insert 1 integer\n");
	scanf("%d \n",&input);
	for(int i = 1; i<= input; i++){
		a *= i;
	}
	printf("%d factorial is %d\n",input,a);
	return 0;
}
