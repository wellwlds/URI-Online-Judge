#include <iostream>

using namespace std;

int main (){
	int n , i , x , y;
	
	cin >> n;
	
	for(i=0;i<n;i++){
		cin >> x >> y;
		cout << (x*y)/2 << " cm2" << endl;
	}
	return 0;
}
