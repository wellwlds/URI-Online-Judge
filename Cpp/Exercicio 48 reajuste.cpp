#include <iostream>
#include <iomanip>
using namespace std;

int main (){
		double sal , ajuste , ajustef ;
		int perc ; 
		cin >> sal;
	if (sal >= 0 && sal <=400.00) {
		ajuste = sal * 0.15;
		ajustef = ajuste + sal;
		perc = 15;
	}
	else if (sal >= 400.01 && sal <=800.00) {
		ajuste = sal * 0.12;
		ajustef = ajuste + sal;	
		perc = 12 ;
	}
	else if (sal >= 800.01 && sal <= 1200.00) {
		ajuste = sal * 0.10;
		ajustef = ajuste + sal;
		perc = 10 ;
	}	
	else if (sal >= 1200.01 && sal <= 2000.00) {
		ajuste = sal* 0.07;
		ajustef = ajuste + sal;
		perc = 7 ;
	}
	else if (sal > 2000) {
		ajuste = sal* 0.04;
		ajustef = ajuste + sal;
		perc = 4 ;
}
	cout << "Novo salario: " << setprecision(2) << fixed << ajustef << endl;
	cout << "Reajuste ganho: " << setprecision(2) << fixed << ajuste << endl;
	cout << "Em percentual: " << perc << " %"<< endl;
	return 0;
}
