#include <iostream>

using namespace std;

int main (){
	int n , l , p=0;
	
	cin >> n >> l;
	for(int i=0;i<n;i++){
		p+=l;
	}
	cout << p << endl;
	return 0;
}
