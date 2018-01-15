#include <stdio.h>

int main(void){
	char arr[30];
	int arr2[30],th=0;
	scanf("%s",arr);
	for(int i=0;arr[i]!='\0';i++){
		arr2[i]=(int)(arr[i]);
	}
	for(int j=0;arr2[j]!='\0';j++){
		if(arr2[j]>th)th=arr2[j];
	}
	printf("%c\n",th);
	return 0;
}
