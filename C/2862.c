#include<stdio.h>

int main(){
	int n,i,inseto;

	while(scanf("%d",&n) != EOF){
		for(i=0;i<n;i++){
			scanf("%d",&inseto);
			if(inseto>8000){
				printf("Mais de 8000!\n");
			}
			else{
				printf("Inseto!\n");
			}
		}
	}
	return 0;
}