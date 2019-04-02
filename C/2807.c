#include<stdio.h>

int main(){
	int iccanobif[40],i,n;

	iccanobif[0]=1;
	iccanobif[1]=1;

	scanf("%d",&n);

	for(i=2;i<n;i++){
		iccanobif[i] = iccanobif[i-1] + iccanobif[i-2];
	}
	for(i=(n-1);i>=0;i--){
		if(i==0){
			printf("%d",iccanobif[i]);
		}
		else{
			printf("%d ",iccanobif[i]);
		}
	}
	printf("\n");
	return 0;
}