#include <iostream>

using namespace std;

int main (){
	int n;
	unsigned long long x , quant;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		quant=1;
		cin >> x;
		for(int j=0;j<x;j++){
			quant=quant*2;
		}
		quant=quant/12;
		quant=quant/1000;
		cout << quant << " kg" << endl;
	}
	return 0;
}
