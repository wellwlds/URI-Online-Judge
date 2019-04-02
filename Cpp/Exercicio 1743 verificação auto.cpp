#include <iostream>

using namespace std;

int main (){
	int a[5] , b[5] , i , conf=0;
	
	for(i=0;i<5;i++){
		cin >> a[i];
	}
	for(i=0;i<5;i++){
		cin >> b[i];
	}
	for(i=0;i<5;i++){
		if(a[i] == b[i]){
			conf++;
		}
	}
	if (conf > 0){
		cout << "N" << endl;
	}
	else {
		cout << "Y" << endl;
	}
	return 0;
}
