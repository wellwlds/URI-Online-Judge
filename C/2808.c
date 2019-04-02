#include<stdio.h>

int main(){
	char o[2],d[2];

	scanf("%s %s",o,d);

	if(o[0]-1 == d[0] && o[1]+2 == d[1]){
		printf("VALIDO\n");
	}
	else if(o[0]+1 == d[0] && o[1]+2 == d[1]){
		printf("VALIDO\n");
	}
	else if(o[0]+2 == d[0] && o[1]+1 == d[1]){
		printf("VALIDO\n");
	}
	else if(o[0]+2 == d[0] && o[1]-1 == d[1]){
		printf("VALIDO\n");
	}
	else if(o[0]+1 == d[0] && o[1]-2 == d[1]){
		printf("VALIDO\n");
	}
	else if(o[0]-1 == d[0] && o[1]-2 == d[1]){
		printf("VALIDO\n");
	}
	else if(o[0]-2 == d[0] && o[1]-1 == d[1]){
		printf("VALIDO\n");
	}
	else if(o[0]-2 == d[0] && o[1]+1 == d[1]){
		printf("VALIDO\n");
	}
	else{
		printf("INVALIDO\n");	
	}

	return 0;
}