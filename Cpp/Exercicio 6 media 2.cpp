#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	double a , b , c , pesoA , pesoB , pesoC , media;
	pesoA = 2;
	pesoB = 3;
	pesoC = 5;
	cin >> a >> b >> c;
	media = ((a * pesoA) + (b * pesoB) + (c * pesoC)) / (pesoA + pesoB + pesoC) ;
	cout << "MEDIA = " << setprecision(1) << fixed << media << endl;
	return 0;
}
