#include <stdio.h>

int main(){ 
	int a1,a2,a3;
	
	scanf("%d %d %d", &a1, &a2, &a3); 

	if(a1 > a2 && a1 > a3)
		printf("%d\n", a2*2 + a3*4);
	if(a2 > a1 && a2 > a3)
		printf("%d\n", a1*2 + a3*2);
	if(a3 > a1 && a3 > a2)
		printf("%d\n", a1*4 + a2*2);
	if(a3 == a1 && a3 == a2)
		printf("%d\n", a1*2 + a2*2);

	return(0);
}