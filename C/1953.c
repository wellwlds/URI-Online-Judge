#include <stdio.h>

int main() {
	int n, matricula, i, epr, ehd, intrusos;
	char curso[3];

	while(scanf("%d",&n)){
		if(n >= 1 || n <= 100000){
			epr = 0;
			ehd = 0;
			intrusos = 0;

			for(i=0;i<n;i++){
				scanf("%d %s",&matricula,curso);
				if(curso[0] == 'E'){
					if(curso[1] == 'P' && curso[2] == 'R'){
						epr++;
					}
					else if(curso[1] == 'H' && curso[2] == 'D'){
						ehd++;
					}
				}
				else if(curso[0] == 'e'){
					if(curso[1] == 'p' && curso[2] == 'r'){
						epr++;
					}
					else if(curso[1] == 'h' && curso[2] == 'd'){
						ehd++;
					}
				}
				else{
					intrusos++;
				}
			}

			printf("EPR: %d\n",epr);
			printf("EHD: %d\n",ehd);
			printf("INTRUSOS: %d\n",intrusos);
		}
	}
	return 0;
}