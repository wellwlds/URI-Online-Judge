#include<stdio.h>
#include<math.h>

int main(){
	int n,i,voto,count;
	float res;
	while(scanf("%d",&n) != EOF){
		count=0;
		for(i=0;i<n;i++){
			scanf("%d",&voto);
			count+=voto;
		}
		res = (n * 2.0) / 3.0;
		if(count >= res){
			printf("impeachment\n");
		}
		else{
			printf("acusacao arquivada\n");
		}
	}
	return 0;
}