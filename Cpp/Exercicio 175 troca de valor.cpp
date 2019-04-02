#include <iostream>

using namespace std;

int main (){
	int n[10] , i , y = 20;
	
	for (i = 0; i < 10; i++){
		cin >> n[i];
	}
	
	for (i = 20; i > 0; i--){
		cout << "N[" << i << "] = " << n[y] << endl;
		y--;
	}
	return 0;
}
