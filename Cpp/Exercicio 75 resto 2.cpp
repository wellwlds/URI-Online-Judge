#include <iostream>
#include <math.h>

using namespace std;

int main (){
	int n , x;
	
	cin >> n;
	
	for (x = 0; x < 10000; x++){
		if (x%n == 2){
			cout << x << endl;
			x++;
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
