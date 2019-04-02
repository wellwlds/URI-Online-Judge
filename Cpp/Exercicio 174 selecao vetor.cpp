#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int A[100] , i;
	float x;
	
	for (i = 0; i < 100; i++){
		cin >> x;
		
		if (x <= 10){
			cout << "A[" << i << "] = " <<setprecision(1) << fixed << x << endl;
		}
	}
	return 0;
}
