#include <stdio.h>

int main(void){
	int total = 0, num = 1;
	while(num!=0){
		printf("Insert an integer(insert 0 to quit): ");
		scanf("%d",&num);
		total += num;
	}
	printf("sum: %d \n",total);
	return 0;
}
