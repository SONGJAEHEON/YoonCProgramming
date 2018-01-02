#include <stdio.h>

int main(void){
	int a, b, c, d, e;
	printf("Insert two dot ex)a b \\n  c d \n");
	scanf("%d %d\n",&a, &b);
	scanf("%d %d\n",&c, &d);
	e=(c-a)*(d-b);
	printf("The size of the rectangle is %d\n",e);
}
