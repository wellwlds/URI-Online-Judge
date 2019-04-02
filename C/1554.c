#include<stdio.h>
#include<math.h>

int main(){
	int n,b,x,y,xb,yb,melhor,i,j;
	double d,dm;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&b);
		scanf("%d %d",&xb,&yb);
		
		for(j=1;j<=b;j++){
			scanf("%d %d",&x,&y);
			d = sqrt( pow((xb-x),2) + pow((yb-y),2));

			if(j==1){
				dm = d;
				melhor = j;
			}
			if(d < dm){
				dm = d;
				melhor = j;
			}
		}
		printf("%d\n",melhor);
	}
	
	return 0;
}