#include <stdio.h>

int main(void){
	int arr[5]={1,2,3,4,5};
	int * ptr =&arr[4];
	for(int i=0;i<5;i++){
		(*ptr)+=2;
		ptr-=1;
	}
	for(int j=0;j<5;j++){
		printf("%d ",arr[j]);
	}
	return 0;
}

