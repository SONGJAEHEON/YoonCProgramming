#include <stdio.h>

int main(void){
	int num,ease;
	printf("Insert an integer.\n");
	scanf("%d",&num);
	if(0<=num&&num<10)ease=1;
	else if(10<=num&&num<20)ease=2;
	else if(20<=num&&num<30)ease=3;
	else ease=4;

	switch(ease){
		case 1:
			printf("number between 0 and 9\n");
			break;
		case 2:
			printf("number between 10 and 19\n");
			break;
		case 3:
			printf("number between 20 and 29\n");
			break;
		case 4:
			printf("number bigger than 30\n");
			break;
	}
	return 0;
}
