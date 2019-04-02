#include <stdio.h>

int main(){ 
	int n,i;
	char pergunta[128];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",pergunta);
		fflush(stdin);
		printf("I am Toorg!\n");
	}
	return 0;
}