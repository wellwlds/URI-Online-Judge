#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int i , n[100];
	double x;
	
	cin >> x;
	
	for (i = 0; i < 100; i++){
		cout << "N[" << i << "] = " << setprecision(4) << fixed << x << endl;
		x = x/2;
}
	return 0;
}
