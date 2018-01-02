#include <stdio.h>

int main(void){
	int input=1;
	int	sum=0;
	printf("Integers will be added until you insert 0\n");
	while(input!=0){
		scanf("%d\n",&input);
		sum+=input;
	}
	printf("%d",sum);
	return 0;
}
