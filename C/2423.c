#include<stdio.h>

int main(){
	int n=0,a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	while(a>=2 && b>=3 && c>=5){
		n++;
		a-=2;
		b-=3;
		c-=5;
	}
	printf("%d\n",n);
	return 0;
}