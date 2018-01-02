#include <stdio.h>

int main(void){
	int a, insert, sum=0, b=0;
	printf("How many integers would you insert?\n");
	scanf("%d",&a);
	while(b<a){
		scanf("%d \n", &insert);
		sum += insert;
		b++;
	}
	sum = sum/a;
	printf("%d",sum);
	return 0;
}
