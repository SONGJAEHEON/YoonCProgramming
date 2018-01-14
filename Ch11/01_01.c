#include <stdio.h>

void sort(int *);

int main(void){
	int arr[5],sum=0,sp;
	for(int i=0; i<=4; i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(arr[j]>arr[j+1]){
				sp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=sp;
			}
		}
	}

	for(int j=0; j<5;j++)sum+=arr[j];
	printf("lagest: %d, smallest: %d, sum: %d\n",arr[4],arr[0],sum);
	return 0;
}
