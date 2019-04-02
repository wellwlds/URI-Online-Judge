	#include <iostream>
	
	using namespace std;
	
	int main (){
		int A , N , i , soma=0;
		
		cin >> A;
		
		cin >> N;
		
		if (N <= 0){
			while (N <= 0){
				cin >> N;
			}
		}
		for (i= 0;i<N;i++){
			soma = soma + A;
			A++;
		}
		cout << soma << endl;
		return 0;
	}
