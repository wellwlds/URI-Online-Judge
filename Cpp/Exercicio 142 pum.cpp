#include <iostream>

using namespace std;

int main (){
	int n , i , x[3];
	
	x[0] = 1;
	x[1] = 2;
	x[2] = 3;
	
	cin >> n;
	for (i = 0 ; i < n ; i++){
		
	cout << x[0] << " " << x[1] << " "<< x[2] << " PUM" << endl;
	
	x[0]+=4;
	x[1]+=4;
	x[2]+=4;
	
	}
	
	return 0;
}
