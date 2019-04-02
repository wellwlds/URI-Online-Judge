#include <stdio.h>

int main(){
	int n,res,j;
	double aux;
	scanf("%d",&n);

	while(n!=0){
		res=0;
		aux = (double)n;
		for(j=0;j<n;j++){
			res+= (n-j)*(n-j);
		}
		printf("%d\n",res);
		scanf("%d",&n);
	}
	
	return 0;
}