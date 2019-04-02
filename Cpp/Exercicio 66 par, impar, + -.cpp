#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int valor1 , valor2 , valor3 , valor4 , valor5 , positivo , negativo , pares , impares;

	cin >> valor1 >> valor2 >> valor3 >> valor4 >> valor5;
	
	positivo = 0;
	negativo = 0;
	pares = 0;
	impares = 0;
	
	if (valor1 > 0){
		positivo++;
	}
	if (valor2 > 0){
		positivo++;
	}
	if (valor3 > 0){
		positivo++;
	}
	if (valor4 > 0){
		positivo++;
	}
	if (valor5 > 0){
		positivo++;
	}

	
	
	
	if (valor1 < 0){
		negativo++;
	}
	if (valor2 < 0){
		negativo++;
	}
	if (valor3 < 0){
		negativo++;
	}
	if (valor4 < 0){
		negativo++;
	}
	if (valor5 < 0){
		negativo++;
	}

		
		
		
			
	if (valor1%2 == 0){
		pares++;
	}
	if (valor2%2 == 0){
		pares++;
	}
	if (valor3%2 == 0){
		pares++;
	}
	if (valor4%2 ==  0){
		pares++;
	}
	if (valor5%2 == 0){
		pares++;
	}

	
	
	
	
	if (valor1%2 == 1 || valor1%2 == -1){
		impares++;
	}
	if (valor2%2 == 1 || valor2%2 == -1){
		impares++;
	}
	if (valor3%2 == 1 || valor3%2 == -1){
		impares++;
	}
	if (valor4%2 == 1 || valor4%2 == -1){
		impares++;
	}
	if (valor5%2 == 1 || valor5%2 == -1){
		impares++;
	}





	cout << pares     << " valor(es) par(es)"     << endl;
	cout << impares   << " valor(es) impar(es)"   << endl;
	cout << positivo << " valor(es) positivo(s)" << endl;
	cout << negativo << " valor(es) negativo(s)" << endl;
	
	
	return 0;
}
