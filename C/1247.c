#include <stdio.h>
#include<math.h>

int main(){
	int d,vf,vg,i;
	double tf, tg;

	while(scanf("%d %d %d", &d, &vf, &vg)){
        tf = 12.0/(double)vf;
        tg = ((sqrt((144+(d*d))))/(double)vg);

        if(tg<=tf){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
	}

	return 0;
}