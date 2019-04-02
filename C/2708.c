#include<stdio.h>
#include<string.h>

int main(){
	int jipe=0,pessoas,total=0;
	char string[7];

	scanf("%s",string);
	while(strcmp(string,"ABEND") != 0){
		scanf("%d",&pessoas);
		if(strcmp(string,"SALIDA") == 0){
			jipe++;
			total+=pessoas;

		}
		else if(strcmp(string,"VUELTA") == 0){
			jipe--;
			total-=pessoas;
		}
		scanf("%s",string);
	}
	printf("%d\n%d\n",total,jipe);
	return 0;
}