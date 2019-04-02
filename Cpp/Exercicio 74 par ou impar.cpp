#include <iostream>

using namespace std;

int main (){
	int n , x , i;
	int in  = 0;
	int out = 0;	
	cin >> n;
	
	for (i = 0; i < n; i++){
	
	cin >> x;

	if (x < 0 && x%2 == 0){
		cout << "EVEN NEGATIVE" << endl;		
	}
	else if (x < 0 && x%2 == -1){
		cout << "ODD NEGATIVE" << endl;
	}
	else if (x > 0 && x%2 == 0){
		cout << "EVEN POSITIVE" << endl;
	}
	else if (x > 0 && x%2 == 1){
		cout << "ODD POSITIVE" << endl;
	}
	else if (x == 0){
		cout << "NULL" << endl;
	}
}
	
	return 0;
}
