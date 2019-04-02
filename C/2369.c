#include<stdio.h>

int main(){
	int n;

	scanf("%d",&n);

	if(n <= 10){
		printf("7\n");
	}
	else if(n >= 11 && n <= 30){
		printf("%d\n",(7+(n-30)));
	}
	else if(n >= 31 && n <= 100){
		printf("%d\n",(7+((n-30)*2)));	
	}
	else if(n > 100){
		printf("%d\n",(7+(n)*5));
	}
	return 0;
}