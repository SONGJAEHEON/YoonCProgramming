#include <stdio.h>

int main(void){
	int arr[5][5];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0; i<4; i++){
		arr[i][4]=arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3];
	}
	for(int i=0; i<5; i++){
		arr[4][i]=arr[0][i]+arr[1][i]+arr[2][i]+arr[3][i];
	}
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
