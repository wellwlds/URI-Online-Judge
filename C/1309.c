#include<stdio.h>
#include<string.h>
#include<math.h>

void formata(char string1[], char string2[], char resposta[]){
    int tamanho = strlen(string1);
    int aux = 1, i, j;

    i = tamanho - 1;
    j = i + ceil(i/3);

    //memset(resposta, 0, strlen(resposta));
    
    for(; i >= 0; i--){

        if(aux > 3){
            aux = 1;
            resposta[j] = ',';
            i++;
        }else
            resposta[j] = string1[i], aux++;
        j--;
    }   
}

int main(){
	int dolar, cent,size,i;
	char money[20];
	char aux[20],centaux[2];
	while(scanf("%d%d",&dolar,&cent) != cent){
		sprintf(aux,"%d",dolar);
		sprintf(centaux,"%d",cent);
		size = strlen(aux);
		
		formata(aux,centaux,money);
		printf("$%s.%s\n",money,centaux);
		money[0] = '\0';
	}
	return 0;
}