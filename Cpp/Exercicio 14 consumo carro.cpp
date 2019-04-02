#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int x;
	double y , consumo;
	cin >> x >> y;
	consumo = x/y;
	cout << setprecision(3) << fixed << consumo << " km/l" << endl;
	return 0;
}
