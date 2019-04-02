#include <iostream>

using namespace std;

int main () {
	int N , ano , mes , dia;
	cin >> N;
	ano = N/365;
	mes = (N%365) /30;
	dia = (N%365) %30;
	
	
 	if (mes > 12) {
	ano = ano + 1;
	mes = 0;
	}
	
	cout << ano << " ano(s)" << endl;
	cout << mes << " mes(ses)" << endl;
	cout << dia << " dia(s)" << endl;
	return 0;
}
