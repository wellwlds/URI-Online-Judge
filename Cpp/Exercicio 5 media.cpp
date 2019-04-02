#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	double a , b , pesoA , pesoB , media;
	pesoA = 3.5;
	pesoB = 7.5;
	cin >> a >> b;
	media = ((a * pesoA) + (b * pesoB)) / (pesoA + pesoB) ;
	cout << "MEDIA = " << media << endl;
	return 0;
}
