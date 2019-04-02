#include<stdio.h>
#include<string.h>

int main(){
	int n,l,i,j,k,count;
	char ch[4][1000];
	char aux[4];	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",ch[i]);
	}

	for(j=0;j<n;j++){
		for(k=j;k<n;k++){
			if(strcmp(ch[j],ch[k]) > 0){
				strcpy(aux,ch[j]);
				strcpy(ch[j],ch[k]);
				strcpy(ch[k],aux);
			}
		}
	}

	for(i=0;i<n;i++){
		printf("%s\n",ch[i]);
	}

	return 0;
}