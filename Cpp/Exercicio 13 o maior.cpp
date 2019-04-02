#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	double a , b , c , resultado, resultadofim;
	cin >> a >> b >> c;
	resultado = (a+b+abs(a-b))/2;
	resultadofim = (resultado+c+abs(resultado-c))/2;
	cout << resultadofim << " eh o maior" << endl;
	return 0;
}
