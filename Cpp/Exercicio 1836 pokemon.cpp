#include <iostream>

using namespace std;

int main (){
	int i , n , nivel , b[4] , iv[4] , ev[4];
	char poke[30];
	
	cin >> n;
	
	for(i=1;i<=n;i++){
		cin >> poke >> nivel;
		
		for(i=0;i<4;i++){
			cin >> b[i] >> iv[i] >> ev[i];
		}
		
		
		cout << "Caso #" << i << ": " << poke << " nivel " << nivel << endl;
		cout << "HP: " << (((iv[0]+b[0]+pow(ev,i/2)/8+50)*nivel)/50)+5  << endl;
		cout << "AT: " << endl;
		cout << "DF: " << endl;
		cout << "SP: " << (((iv+b+pow(ev,i/2)/8)*nivel)/50)+5 << endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
