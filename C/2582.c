#include<stdio.h>
#include<string.h>


int main(){
	int c,x,y,i,j;
	
	scanf("%d",&c);
	
	char musicas[11][15];
	strcpy(musicas[0],"PROXYCITY");
	strcpy(musicas[1],"P.Y.N.G.");
	strcpy(musicas[2],"DNSUEY!");
	strcpy(musicas[3],"SERVERS");
	strcpy(musicas[4],"HOST!");
	strcpy(musicas[5],"CRIPTONIZE");
	strcpy(musicas[6],"OFFLINE DAY");
	strcpy(musicas[7],"SALT");
	strcpy(musicas[8],"ANSWER!");
	strcpy(musicas[9],"RAR?");
	strcpy(musicas[10],"WIFI ANTENNAS");

	for(i=0;i<c;i++){
		scanf("%d %d",&x, &y);

		if((x+y) <= 10 && (x+y)>=0){
			printf("%s\n",musicas[x+y]);
		}
	}
	return 0;
}