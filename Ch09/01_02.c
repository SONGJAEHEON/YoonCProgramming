#include <stdio.h>

int CelToFah(int);
int FahToCel(int);

int main(void){
	int in,out;
	char ch;
	printf("which one do you wanna change? If it is Fah. insert 'F'or 'f'. If another, insert 'C' or 'c'\n");
	scanf("%c",&ch);
	printf("Insert degree");
	scanf("%d",&in);
	if(ch=='F'||ch=='f')out=FahToCel(in);
	else if(ch=='C'||ch=='c')out=CelToFah(in);
	else{
		printf("wrong insert\n");
		return 0;	
	}
	printf("The answer is %d\n",out);
}

int CelToFah(int a){
	return a*9/5+32;
}
int FahToCel(int a){
	return (a-32)*5/9;
}
