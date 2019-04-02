#include <iostream>

using namespace std;

int main (){
	int m = 1 , n = 1 , soma;

	while (m > 0 && n > 0){
		soma = 0;
		
		cin >> m >> n;
	
		if (m <= 0 || n <= 0){
			return 0;
		}
		
		if(m < n){
			
			while (m <= n){
			
				soma = soma + m;
				cout << m << " ";
				m++;
			
			}
			cout << "Sum=" << soma << endl;
		}
		else if (n < m){
			
			while (n <= m){
				
				soma = soma + n;
				cout << n << " ";
				n++;		
				
			}
			cout << "Sum=" << soma << endl;
		}
	}

	return 0;
}
