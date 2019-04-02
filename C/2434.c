#include<stdio.h>

int main(){
	int n,mov,total,i;

	scanf("%d %d",&n,&total);

	for(i=0;i<n;i++){
		scanf("%d",&mov);
		total+=mov;
		printf("%d\n",total);
		getchar();
	}
	printf("%d\n",total-50);
	return 0;
}