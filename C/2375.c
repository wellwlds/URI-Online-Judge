#include<stdio.h>

int main(){
	int t,a,l,p;
	
	scanf("%d",&t);
	scanf("%d %d %d",&a,&l,&p);

	if(a>=t && l>=t && p>=t){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	return 0;
}