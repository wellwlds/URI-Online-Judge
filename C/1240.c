#include <stdio.h>
#include <string.h>

int compara(int a,int b){
	int sizea, sizeb,aux,i,res=0;
	char aa[11],bb[11];
	sprintf(aa, "%d", a);
	sprintf(bb, "%d", b);
	sizea = strlen(aa);
	sizeb = strlen(bb);
	sizea--;
	aux = sizeb-1;
	for(i=sizea;i>=0;i--){
		if(aa[i]==bb[aux]){
			res++;
		}
		aux--;
	}
	if(res==sizeb){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n,i,a,b;
	int res;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		res = compara(a,b);

		if(res == 1){
			printf("encaixa\n");
		}
		else{
			printf("nao encaixa\n");
		}
	}
	return 0;
}