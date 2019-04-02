#include <iostream>

using namespace std;

int main (){
	int alcool = 0, gasolina = 0, diesel = 0, x;
	
	while (x != 4){
		cin >> x;
		
		if (x == 1){
			alcool++;
		}
		else if (x == 2){
			gasolina++;
		}
		else if (x == 3){
			diesel++;
		}
	}
	cout << "MUITO OBRIGADO" << endl << "Alcool: " << alcool << endl << "Gasolina: " << gasolina << endl << "Diesel: " << diesel << endl;
	
	return 0;
}
