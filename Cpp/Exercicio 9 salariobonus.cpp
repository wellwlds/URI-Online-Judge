#include <iostream>
#include <iomanip>

using namespace std;

char palavra1[15]; 

int main () {
	double salario, venda, total;
	cin >> palavra1 >> salario >> venda;
	total = salario + (venda*0.15);
	cout << "TOTAL = R$ " << setprecision(2) << fixed << total << endl;
	return 0;
}
