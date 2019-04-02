#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	double salario , salario8 , salario18 , salario28;
	
	cin >> salario; 
	
	salario8  = ((salario - 2000.00) * 0.08);
	salario18 = ((salario - 3000.00) * 0.18) + 80;
	salario28 = ((salario - 4500.00) * 0.28) + 350;
	
	if (salario >= 0.00 && salario <= 2000.00){
		cout << "Isento" << endl;
	}
	else if (salario >= 2000.01 && salario <= 3000.00){
		cout << "R$ " << setprecision(2) << fixed << salario8<< endl;
	}
	else if (salario >= 3000.01 && salario <= 4500.00){
		cout << "R$ " << setprecision(2) << fixed << salario18<< endl;
	}
	else if (salario > 4500.00){
		cout << "R$ " << setprecision(2) << fixed << salario28 << endl;
	}

	
	return 0;
}
