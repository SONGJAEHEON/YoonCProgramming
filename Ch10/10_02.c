#include <stdio.h>

void pr(int,int);

int main(void){
	int a, b, c;
	printf("insert 2 integers between 2 and 9. ex)2 5\n");
	scanf("%d %d",&a,&b);
	if(a,b){
		c=a;
		a=b;
		b=c;
	}
	pr(a,b);
	return 0;
}
void pr(int a, int b){
	for(int i=a;i<=b;i++){
		for(int j=1;j<=9;j++){
			printf("%d * %d = %d\n", i,j,i*j);
		}
	}
}
