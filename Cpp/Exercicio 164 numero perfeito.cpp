#include <iostream>

using namespace std;

int main (){
	int n , x , i , j , div;
	
	cin >> n;
	
	if (n >= 1 && n <= 20){

		for (i=0;i<n;i++){
			j=1;
			div=0;
			cin >> x;
			
			while (j < x){
				
				if (x%j==0){
					div = div + j;
				}
				j++;
			}
			if (x == div){
				cout << div << " eh perfeito" << endl;
			}
			
			else {
				cout << x << " nao eh perfeito" << endl;
			}
		}
		
	}
	return 0;
}
