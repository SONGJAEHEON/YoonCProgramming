#include <stdio.h>

int main(void){
	int cnt=0;
	for(int i=2;cnt<10;i++){
		int cnt2=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cnt2++;
			}
		}
		if(cnt2==2){
			printf("%d ",i);
			cnt++;
		}
	}
	return 0;
}
