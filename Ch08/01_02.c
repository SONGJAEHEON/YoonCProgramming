#include <stdio.h>

int main(void){
	int n1, n2,a;
	scanf("%d %d",&n1,&n2);
	if(n1==n2)a=0;
	else{
		a=(n1>n2)? n1-n2:n2-n1;
	}
	printf("answer is %d\n",a);
	return 0;
}
