#include <iostream>

using namespace std;

int main (){
	int n , i , x , y , soma = 0;
	
	cin >> x >> y;
	
	if (x < y){
		while (x <= y){
			if (x%13 != 0){
				soma = soma + x;
			}
			x = x + 1;
		}
		cout << soma << endl;
	}
	else if (x > y){
		while (y <= x){
			if (y%13 != 0){
				soma = soma + y;
			}
			y = y + 1;
		}
		cout << soma << endl;
	}	
	
	return 0;
}
