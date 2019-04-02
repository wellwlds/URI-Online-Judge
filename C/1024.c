#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i,j,k,size;
	char texto[1000], aux;
	size_t tamanho = 1000;
	scanf("%d",&n);

	for(i=0;i<=n;i++){
		size=0;
    	__fpurge(stdin);
		fgets(texto,100,stdin);
		//primeiro passo DESLOCA 3
		while(texto[size] != '\0'){
			if( (texto[size] >= 65 && texto[size] <= 90) ||
				(texto[size] >= 97 && texto[size] <= 122) 
				)
			texto[size]+=3;
			size++;
		}
		//segundo passo INVERTE LINHA
		char texto2[size];
		k = size - 1;
		for(j=0;j<size;j++){
			texto2[j] = texto[k];
			k--;
			//printf("%c",texto2[j]);
		}
		//printf("\n");
		//terceiro passo DESLOCA UM PRA ESQUERDA A PARTIR DA METADE
		for(j=(size/2);j<size;j++){
			texto2[j]--;
		}

		//imprime
		printf("%s\n",texto2);
	}

	return 0;
}