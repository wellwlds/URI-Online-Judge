#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	double tempogasto , velocmedi , distancia , gasto , resultado;
	gasto = 12;
	cin >> tempogasto >> velocmedi;
	/*	carro gasta 12km/l
		tempo gasto em horas
		velocidade media da viagem */
	distancia = velocmedi*tempogasto;
	resultado = distancia/gasto;
	cout << setprecision(3) << fixed << resultado << endl;
	return 0;
}
