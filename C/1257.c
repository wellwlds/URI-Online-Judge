#include<stdio.h>
#include<string.h>

int main(){
	int n,l,i,j,k,count;
	char ch[50];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&l);
		count=0;
		for(j=0;j<l;j++){
			scanf("%s",ch);
			for(k=0;k<strlen(ch);k++){
				count += ch[k] - 65 + (k+j);
			}
		}
		printf("%d\n",count);
	}
	return 0;
}