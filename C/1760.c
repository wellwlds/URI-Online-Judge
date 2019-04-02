#include<stdio.h>
#include<math.h>

int main(){
	int l;
	float res;
	while(scanf("%d",&l) != EOF){
		res = (pow(l,2)*sqrt(3))/4;
		printf("%.2f\n",res);
	}

	return 0;

}