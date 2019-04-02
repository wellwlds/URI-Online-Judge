#include <iostream>
#include <string.h>

using namespace std;

int main (){
	int QT;
	cin >> QT;

	char jogador1[1024] , escolha1[6] , jogador2[1024] , escolha2[6];
	
	for(int i=0;i<QT;i++){
		unsigned int um , dois;
		cin >> jogador1 >> escolha1 >> jogador2 >> escolha2;
		cin >> um >> dois;
		
		if((um+dois)%2 == 1){
			if(strcmp(escolha1,"IMPAR")){
				cout << jogador1 << endl;
			}
			else if(strcmp(escolha2,"IMPAR")){
				cout << jogador2 << endl;
				cout << escolha2 << endl;
			}
		}
		else if((um+dois)%2 == 0){
			if(strcmp(escolha1,"PAR")){
				cout << jogador1 << endl;
			}
			else if(strcmp(escolha2,"PAR")){
				cout << jogador2 << endl;
			}
		}
		
	}
	return 0;
}
