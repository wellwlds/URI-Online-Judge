#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	double a , b , c , triangulo , circulo , trapezio , quadrado , retangulo;
	cin >> a >> b >> c;
	triangulo = (a*c)/2;
	circulo = (c*c)*3.14159;
	trapezio = ((a+b)*c)/2;
	quadrado = b*b;
	retangulo = a*b;
	cout << "TRIANGULO: " << setprecision(3) << fixed << triangulo << endl;
	cout << "CIRCULO: " << setprecision(3) << fixed << circulo << endl;
	cout << "TRAPEZIO: " << setprecision(3) << fixed << trapezio << endl;
	cout << "QUADRADO: " << setprecision(3) << fixed << quadrado << endl;
	cout << "RETANGULO: " << setprecision(3) << fixed << retangulo << endl;
	return 0;
}

