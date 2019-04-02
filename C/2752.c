#include<stdio.h>
#include<string.h>

int main(){
	char string[50];
	strcpy(string,"AMO FAZER EXERCICIO NO URI");
	printf("<%s>\n",string);
	printf("<%30s>\n",string);
	printf("<%.20s>\n",string);
	printf("<%-20s>\n",string);
	printf("<%-30s>\n",string);
	printf("<%.30s>\n",string);
	printf("<%30.20s>\n",string);
	printf("<%-30.20s>\n",string);
	return 0;
}