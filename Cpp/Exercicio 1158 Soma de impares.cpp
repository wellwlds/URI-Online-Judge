#include <iostream>

using namespace std;

int main (){
	int N , X , Y , i , j, soma;
	
	cin >> N;
	
	for (i=0;i<N;i++){
		soma=0;
		j=0;
		
		cin >> X;
		cin >> Y;
		
		if (Y<=0){
			while (Y<=0){
				cin >> Y;
			}
		}
		
		while (j<Y){
			if (X%2 == 0){
				X++;
			}
			if (X%2 == 1 || X%2 == -1){
				soma = soma + X;
				X+=2;
			}
 			j++;
			
		}
		cout << soma << endl;
	}
	return 0;
}
