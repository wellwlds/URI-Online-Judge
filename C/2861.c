#include<stdio.h>

int main(){
	int c,i;
	char pergunta[1024];

	while(scanf("%d",&c) != EOF){
		for(i=0;i<c;i++){
			gets(pergunta);
			printf("gzuz\n");
		}
	}
	return 0;
}