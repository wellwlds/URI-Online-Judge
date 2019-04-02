#include<stdio.h>

int main(){
	int n,min,max,i, count,altura;
	
	while(scanf("%d %d %d",&n, &min, &max) != EOF){
		count = 0;
		for(i=0;i<n;i++){
			scanf("%d",&altura);
			if(altura >= min && altura <= max){
				count++;
			}
		}
		printf("%d\n",count);
	}

	return 0;
}