#include <iostream>

using namespace std;

int main () {
	int t , x , i , n[1000];
	
	x = 0;
	
	cin >> t;
	
	for (i = 0; i < 1000; i++){
		if (x >= t){
			x = 0;
		}
		cout << "N[" << i << "] = " << x << endl;
	x++;	
	}

	return 0;
}
