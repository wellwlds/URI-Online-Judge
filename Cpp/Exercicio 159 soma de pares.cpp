#include <iostream>

using namespace std;

int main (){
	int  x=1 , i , soma;
	
	while (x!=0){
	
		soma=0;
		cin >> x;
		
		if (x == 0){
			return 0;
		}
	
		for (i=0;i<=4;i++){
			
			if (x%2 == 0){
				soma = soma + x;
				x+=2;
				
			}
		
			else{
				x++;
				i--;
			}
			
		}
			
			cout << soma << endl;
	}
	return 0;
}
