#include <stdio.h>

int main(){
	int mes,dia;

	while(scanf("%d %d",&mes,&dia) != EOF){

		if(mes == 12){
			if(dia == 25){
				printf("E natal!\n");
			}
			else if(dia == 24){
				printf("E vespera de natal!\n");	
			}
			else if(dia > 25){
				printf("Ja passou!\n");
			}
			else{
				printf("Faltam %d dias para o natal!\n", 25	 			  - dia);
			}
		}
		else{  
			if(mes == 11)printf("Faltam %d dias para o natal!\n", 25+30 			  - dia);  
			if(mes == 10)printf("Faltam %d dias para o natal!\n", 25+30+31 			  - dia);
			if(mes == 9) printf("Faltam %d dias para o natal!\n", 25+(30*2)+31 		  - dia);
			if(mes == 8) printf("Faltam %d dias para o natal!\n", 25+(30*2)+(31*2)    - dia);
			if(mes == 7) printf("Faltam %d dias para o natal!\n", 25+(30*2)+(31*3)    - dia);
			if(mes == 6) printf("Faltam %d dias para o natal!\n", 25+(30*3)+(31*3)    - dia);
			if(mes == 5) printf("Faltam %d dias para o natal!\n", 25+(30*3)+(31*4)    - dia);
			if(mes == 4) printf("Faltam %d dias para o natal!\n", 25+(30*4)+(31*4)    - dia);
			if(mes == 3) printf("Faltam %d dias para o natal!\n", 25+(30*4)+(31*5) 	  - dia);
			if(mes == 2) printf("Faltam %d dias para o natal!\n", 25+29+(30*4)+(31*5) - dia);
			if(mes == 1) printf("Faltam %d dias para o natal!\n", 25+29+(30*4)+(31*6) - dia);
		}
	}

	return 0;
}