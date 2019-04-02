#include <iostream>
#include <math.h>

using namespace std;

int main (){
	double a , b , c , aux;
	
	cin >> a >> b >> c;


	if (a > 0 && b > 0 && c > 0){
	
	if (b > a && b > c){
		aux = a;
		a = b;
		b = aux;
	}
	else if (c > a && c > b){
		aux = a;
		a = c;
		c = aux;
	}
		if (a >= b + c){
			cout << "NAO FORMA TRIANGULO" << endl;}

	else {
		if (pow(a,2) == pow(b,2) + pow(c,2)){
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if (pow(a,2) > pow(b,2) + pow(c,2)){
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		
		if (pow(a,2) < pow(b,2) + pow(c,2)){
			cout << "TRIANGULO ACUTANGULO" << endl;	
		}
		if (a == b && b == c && a == c){
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		if (a == b && b != c || a == c && c != b || c == b && a != c){
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
}

		

	return 0;
}
