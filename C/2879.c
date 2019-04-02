#include<stdio.h>

int main(){
	int n,i,jogada,count=0;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&jogada);
		if(jogada!=1){
			count++;
		}
	}

	printf("%d\n",count);
	return 0;
}