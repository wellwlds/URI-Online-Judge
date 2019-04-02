#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	int n , i;
	
	cin >> n;
	if (n > 1 && n < 1000) {

	for (i = 1 ; i <= n ; i++){
		
	cout << setprecision(10)<< fixed <<i << " " << pow(i,2)   << " "<< pow(i,3)   << endl;
	cout << setprecision(10)<< fixed <<i << " " << pow(i,2)+1 << " "<< pow(i,3)+1 << endl;
	
	}
}
	return 0;
}
