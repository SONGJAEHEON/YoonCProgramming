#include <stdio.h>

void odd(int*);
void even(int*);

int main(void){
	int arr[10];
	for(int i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	odd(&arr);
	even(&arr);
	return 0;
}
void odd(int *arr){
	for(int j=0; j<10; j++){
		if(arr[j]%2!=0){
			printf("odd number: %d\n",arr[j]);
					}
			}
	}
void even(int *arr){	
	for(int k=0; k<10; k++){
		if(arr[k]%2==0){
			printf("even number : %d\n",arr[k]);
					}	
			}
	}
