#include <iostream>

using namespace std;

int main () {
	double real;
	cin >> real;

	if (real >= 0 && real <= 25) {
		cout << "Intervalo [0,25]" << endl;
	}
	else if (real > 25 && real <=  50) {
		cout << "Intervalo (25,50]" << endl;
	}
	else if (real > 50 && real <= 75) {
		cout << "Intervalo (50,75]" << endl;
	}
	else if (real > 75 && real <= 100) {
		cout << "Intervalo (75,100]" << endl;
	}
	else {
		cout << "Fora de intervalo" << endl;
	}
	
	return 0;
}
