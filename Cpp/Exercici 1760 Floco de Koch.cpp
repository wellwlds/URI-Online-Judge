#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main (){
	float l , r;
	
	while (cin >> l){
		r = pow(l,2)*(pow(3,1/2))/4;
		cout << setprecision(2) << fixed << r << endl;
	}
	
	return 0;
}
