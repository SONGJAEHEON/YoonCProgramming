#incdlude <stdio.h>

int main(void){
	int num,n=1,arr[100];
	for(int k=0; k<100;k++){
		arr[k]=(-1);
	}
	scanf("%d",&num);
	for(int i=0; ; i++){
		if(num!=1){
			arr[99-i]=num%2;
			num = num/2;
		}
		if(num==1){
			arr[99-i]=1;
			break;
		}
	}
	printf("decimal number %d is the number below with binary number\n",num);
	for(int j=0;j<100;j++){
		if(arr[j]!=(-1)){
			printf("%d",arr[j]);
		}
	}
	return 0;
}

