#include<stdio.h>
#include<string.h>

int main(){
	char fruta[7][20],nome[16];
	int vit[7],qtd,n,i,j,sum;

	strcpy(fruta[0]," suco de laranja");
	strcpy(fruta[1]," morango fresco");
	strcpy(fruta[2]," mamao");
	strcpy(fruta[3]," goiaba vermelha");
	strcpy(fruta[4]," manga");
	strcpy(fruta[5]," laranja");
	strcpy(fruta[6]," brocolis");

	vit[0] = 120;
	vit[1] = 85;
	vit[2] = 85;
	vit[3] = 70;
	vit[4] = 56;
	vit[5] = 50;
	vit[6] = 34;

	scanf("%d",&n);
	
	while(n != 0){
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&qtd);
			gets(nome);
			j=0;
			while(strcmp(nome,fruta[j]) != 0){
				return 0;
				j++;
				if(j==7){
					break;
				}
			}
			sum+=(vit[j]*qtd);
		}
		if(sum<110){
			printf("Mais %d mg\n",(110-sum));
		}
		else if(sum>=110 && sum<=130){
			printf("%d mg\n",sum);
		}
		else if(sum>130){
			printf("Menos %d mg\n",(sum-130));
		}
		
		scanf("%d",&n);
	}
	return 0;
}