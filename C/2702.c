#include<stdio.h>

int main(){
	int ca,ba,pa,cr,br,pr;
	int sum=0;

	scanf("%d %d %d", &ca, &ba, &pa);
	scanf("%d %d %d", &cr, &br, &pr);

	if(ca < cr){
		sum += cr - ca;
	}
	if(ba < br){
		sum += br - ba;
	}
	if(pa < pr){
		sum += pr - pa;
	}
	
	printf("%d\n",sum);

	return 0;
}