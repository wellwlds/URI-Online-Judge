#include <iostream>

using namespace std;

int main (){
	int n ;
	
	cin >> n;
	
	int x[n] , menor=x[0] , i , idi=0 ;
	
	for (i=0;i<n;i++){
		cin >> x[i];
		
		if (x[i] < menor){
			menor = x[i];
			idi = i;
		}
		
	}
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << idi << endl;
	
	
	return 0;
}
