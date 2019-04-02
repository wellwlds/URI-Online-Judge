#include<stdio.h>
#include<string.h>

int main(){
	int entrada,sum=0,i,venc=1;
	
	char renas[20][9];
	strcpy(renas[0],"Dasher");
	strcpy(renas[1],"Dancer");
	strcpy(renas[2],"Prancer");
	strcpy(renas[3],"Vixen");
	strcpy(renas[4],"Comet");
	strcpy(renas[5],"Cupid");
	strcpy(renas[6],"Donner");
	strcpy(renas[7],"Blitzen");
	strcpy(renas[8],"Rudolph");

	for(i=0;i<9;i++){
		scanf("%d",&entrada);
		sum+=entrada;
	}
	while(sum > 1){
		sum--;
		venc++;
		if(venc==10){
			venc=1;
		}
	}	
	printf("%s\n",renas[venc-1]);
	return 0;
}