#include<stdio.h>

int main(){
	char string[30][10];
	int i;

	while(scanf("%s",string[0]) != EOF){
		for(i=1;i<10;i++){
			scanf("%s",string[i]);
			if(i==2){
				printf("%s\n",string[2]);
			}
			else if(i==6){
				printf("%s\n",string[6]);
			}
			else if(i==8){
				printf("%s\n",string[8]);
			}
		}
	}
	return 0;
}	