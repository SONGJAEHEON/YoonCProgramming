#include <stdio.h>

int main(void){
	int avg, s1, s2, s3;
	char sc;
	scanf("%d %d %d",&s1,&s2,&s3);
	avg = (s1+s2+s3)/3;
	if(avg>=90)sc='A';
	else if(avg>=80)sc='B';
	else if(avg>=70)sc='C';
	else if(avg>=50)sc='D';
	else sc='D';
	printf("your score is %c\n",sc);
	return 0;
}
