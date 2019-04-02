#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int codpeca1 , codpeca2, numpeca1, numpeca2;
	double vpeca1 , vpeca2 , total;
	cin >> codpeca1;
	cin >> numpeca1; 
	cin >> vpeca1;
	cin >> codpeca2;
	cin >> numpeca2;
	cin >> vpeca2;
	total = (numpeca1*vpeca1 + numpeca2*vpeca2);
	cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << total << endl;
	return 0;
}
