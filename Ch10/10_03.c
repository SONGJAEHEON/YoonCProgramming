#include <stdio.h>

int main(void){
	int gcd,a,b,c;
	printf("insert 2 integers. ex)3 5\n");
	scanf("%d %d",&a,&b);
	if(a>=b)c=b;
	else c=a;
	for(int i=1;i<=c;i++){
		if(a%i==0&&b%i==0)gcd=i;
	}
	printf("GCD is %d\n",gcd);
	return 0;
}
