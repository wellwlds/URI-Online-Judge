#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	double pi , r , volume;
	cin >> r;
	pi = 3.14159;
	volume = (4.0/3.0)*pi*(r*r*r);
	cout << "VOLUME = " << setprecision(3) << fixed << volume << endl;
	return 0;
}
