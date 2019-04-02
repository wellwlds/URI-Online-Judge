#include <iostream>

using namespace std;

int main(){
	int T , p[5] , cont=0;
	
	cin>> T;
	
	for(int i=0;i<5;i++){
		cin >> p[i];
		if(p[i]==T){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}
