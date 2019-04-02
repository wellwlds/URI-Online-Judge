#include<stdio.h>

int main(){
	int n,m,i,j,k=0,dif;
	int total[300];
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&total[i]);
	}
	for(i=0;i<m;i++){
		dif=0;
		for(j=i+1;j<m;j++){
			if(total[i]==total[j]){
				dif=1;
			}
		}
		if(dif!=1){
			k++;
		}
	}
	printf("%d\n",n-k);
	return 0;
}