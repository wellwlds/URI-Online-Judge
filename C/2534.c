#include<stdio.h>

int main(){
	int n,q,i,j,qi;
	int v[100];
	while(scanf("%d %d", &n, &q) != EOF){
		for(i=0;i<n;i++){
			scanf("%d",&v[i]);
		}
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if(v[i] < v[j]){
					qi = v[i];
					v[i] = v[j];
					v[j] = qi;
				}
			}
		}
		for(i=0;i<q;i++){
			scanf("%d",&qi);
			printf("%d\n",v[qi-1]);
		}
	}
	return 0;
}