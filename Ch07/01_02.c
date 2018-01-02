#include <stdio.h>

int main(void){
	int a;
	int b=1;
	printf("Insert number\n");
	scanf("%d\n",&a);
	while(b<a+1){
		printf("3 * %d = %d\n",b,3*b);
		b++;
	}
	return 0;
}
