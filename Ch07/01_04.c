#include <stdio.h>

int main(void){
	int a, b=9;
	printf("Insert a number between 1 and 9");
	scanf("%d\n",&a);
	while(b>0){
		printf("%d * %d = %d\n", a, b, a*b);
		b--;
	}
	return 0;
}
