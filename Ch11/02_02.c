#include <stdio.h>

int main(void){
	char arr[30];
	int cnt;
	char sp;
	scanf("%s",arr);
	for(int i=0; arr[i]!='\0';i++){
		cnt++;
	}
	for(int j=0; j<cnt/2;j++){
		sp=arr[j];
		arr[j]=arr[cnt-j-1];
		arr[cnt-j-1]=sp;
	}
	printf("%s\n",arr);
	return 0;
}
