#include<stdio.h>
#include<math.h>

int main(){
	int n;
	int log;

	while(scanf("%d",&n) != EOF){
		log = pow(2,(int)(log10(n)/log10(2)));
		if(n==1) printf("0\n");
		else{
			log = log10(n)/log10(2);
			printf("%d\n", log);       
		}
	}

	return 0;
}