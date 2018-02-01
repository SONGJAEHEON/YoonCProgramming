#include <stdio.h>

int main(void){
	int temp;
	int arr[6]={1,2,3,4,5,6};
	int * ptr1=&arr[0];
	int * ptr2=&arr[5];
	for(int i=0;i<3;i++){
		temp=*ptr2;
		*ptr2=*ptr1;
		*ptr1=temp;
	}
	for(int j=0;j<6;j++){
		printf("%d ",arr[j]);
	}
	return 0;
}
