#include <iostream>
#include <string.h>
using namespace std;


int main (){
	int i , n;
	char shel[15] , raj[15];
	
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> shel >> raj;
		if (!strcmp(shel , "pedra")){
			if (!strcmp(raj , "papel") || !strcmp(raj , "Spock")){
				cout << "rajesh" << endl;
			}
			if (!strcmp(raj , "lagarto") || !strcmp(raj , "tesoura")){
				cout << "sheldon" << endl;
			}
			if (!strcmp(raj , "pedra")){
				cout << "empate" << endl;
			}
		}
		if (!strcmp(shel , "lagarto")){
			if (!strcmp(raj , "pedra") || !strcmp(raj , "tesoura")){
				cout << "rajesh" << endl;
			}
			if (!strcmp(raj , "papel") || !strcmp(raj , "Spock")){
				cout << "sheldon" << endl;
			}
			if (!strcmp(raj , "lagarto")){
				cout << "empate" << endl;
			}
		}
		if (!strcmp(shel , "Spock")){
			
			if (!strcmp(raj , "papel") || !strcmp(raj , "lagarto")){
				cout << "rajesh" << endl;
			}
			if (!strcmp(raj , "pedra") || !strcmp(raj , "tesoura")){
				cout << "sheldon" << endl;
			}
			if (!strcmp(raj , "Spock")){
				cout << "empate" << endl;
			}
		if (!strcmp(shel , "pedra")){
			if (!strcmp(raj , "papel") || !strcmp(raj , "Spock")){
				cout << "rajesh" << endl;
			}
			if (!strcmp(raj , "lagarto") || !strcmp(raj , "tesoura")){
				cout << "sheldon" << endl;
			}
			if (!strcmp(raj , "pedra")){
				cout << "empate" << endl;
			}
		}
	}
		if (!strcmp(shel , "tesoura")){
			if (!strcmp(raj , "pedra") || !strcmp(raj , "Spock")){
				cout << "rajesh" << endl;
			}
			if (!strcmp(raj , "papel") || !strcmp(raj , "lagarto")){
				cout << "sheldon" << endl;
			}
			if (!strcmp(raj , "tesoura")){
				cout << "empate" << endl;
			}
		}
		if (!strcmp(shel , "papel")){
			if (!strcmp(raj , "tesoura") || !strcmp(raj , "lagarto")){
				cout << "rajesh" << endl;
			}
			if (!strcmp(raj , "pedra") || !strcmp(raj , "Spock")){
				cout << "sheldon" << endl;
			}
			if (!strcmp(raj , "papel")){
				cout << "empate" << endl;
			}
		}

	}
	return 0;
}
