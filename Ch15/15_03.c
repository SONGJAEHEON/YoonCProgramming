#include <stdio.h>

int main(void){
	int arr[10],a=0,b=0,k;
	for(int i=0; i<10; i++){
		scanf("%d",&k);
		if(k%2==0){
			arr[9-b]=k;
			b++;
		}
		else if(k%2!=0){
			arr[a]=k;
			a++;
		}
	}
	for(int j=0; j<10; j++){
		printf("%d ",arr[j]);
	}
	return 0;
}
