#include <stdio.h>

int main(void){
	char a[30],len;
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
		len++;
	}
	printf("length is %d\n",len);
	return 0;
}
