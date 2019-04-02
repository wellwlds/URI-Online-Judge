#include<stdio.h>

int main(){
	int jog[6],lot[6],count=0,i,j;

	for(i=0;i<6;i++){
		scanf("%d",&lot[i]);
	}
	for(i=0;i<6;i++){
		scanf("%d",&jog[i]);
		for(j=0;j<6;j++){
			if(jog[i]==lot[j]){
				count++;
				break;
			}
		}
	}
	if(count < 3){
		printf("azar\n");
	}
	else if(count == 3){
		printf("terno\n");
	}
	else if(count == 4){
		printf("quadra\n");
	}
	else if(count == 5){
		printf("quina\n");
	}
	else if(count == 6){
		printf("sena\n");
	}
	return 0;
}