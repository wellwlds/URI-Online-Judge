#include <iostream>

using namespace std;

int main (){
	int i , n , t , j;
	
	cin >> t;
	
	for (i=0;i<t;i++){
		cin >> n;
		int jog[n];
		for (j=0;j<n;j++){
			cin >> jog[j];
		}
		cout << "Case " << i+1 << ": " << jog[(n/2)] << endl;
	}
	
}
