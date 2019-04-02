#include <iostream>

using namespace std;

int main (){
	int x , i;
	
	while (x != 0){
	
		cin >> x;
		if (x == 0){
			return 0;
		}
		for (i=1;i<x;i++){
			cout << i << " ";
		}
		cout << i;	
		cout << endl;
	}
	
	return 0;
}
