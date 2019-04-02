#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int resposta = 1 , i;
	float total , nota;
	

		while (i <= 2){
			cin >> nota;
		
			if (nota >= 0 && nota <= 10){
					
				i++;
				total = total + nota;
	
			}
	
			else {
				cout << "nota invalida" << endl;
			}
		
			if (i == 2){
				cout << "media = " << setprecision(2) << fixed << total / i << endl;
				i = 0;
				total = 0;							
			
				cout << "novo calculo (1-sim 2-nao)" << endl;
				cin >> resposta;
			
				if (resposta == 2){
					return 0;
				}
			
				if (resposta != 1 && resposta != 2){
					while (resposta != 1){
						
						cout << "novo calculo (1-sim 2-nao)" << endl;
						cin >> resposta;
					
					}
				}

			}		
		}
	
	
	return 0;
}
