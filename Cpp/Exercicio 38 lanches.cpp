#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double Cod1 , Cod2 , Cod3 , Cod4 , Cod5 , n , n2 , C1 , C2 , C3 , C4 , C5;
	Cod1 = 4.00;
	Cod2 = 4.50;
	Cod3 = 5.00;	
	Cod4 = 2.00;
	Cod5 = 1.50;
	cin >> n >> n2;
	if (n == 1) {
	C1 = Cod1*n2;
	cout << "Total: R$ " << setprecision(2) << fixed << C1 << endl;
}
	else if (n == 2) {
	C2 = Cod2*n2;
	cout << "Total: R$ " << setprecision(2) << fixed << C2 << endl;
}
	else if (n == 3) {
	C3 = Cod3*n2;
	cout << "Total: R$ " << setprecision(2) << fixed << C3 << endl;
}
	else if (n == 4) {
	C4 = Cod4*n2;
	cout << "Total: R$ " << setprecision(2) << fixed << C4 << endl;
}
	else if (n == 5){
	C5 = Cod5*n2;
	cout << "Total: R$ " << setprecision(2) << fixed << C5 << endl;
}
	return 0;
}
