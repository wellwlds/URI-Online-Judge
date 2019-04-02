#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int nfun;
	double salario, horas, phora;
	cin >> nfun;
	cin >> horas;
	cin >> phora;
	salario = horas*phora;
	cout << "NUMBER = " << nfun << endl;
	cout << "SALARY = U$ " << setprecision(2) << fixed << salario << endl;
	
	return 0;
}
