#include <iostream>

using namespace std;

int main (){
	char frase[512] , j=0;
	
	while(frase[j] != '.' && frase[j-1] != '.'){
		cin >> frase[j];
		j++;
	}

	for(int i=0;i<1023; i++){
		if(frase[i] == 'j' || frase[i] == 'jj'){
			frase[i] = 'f';
		}
		if( frase[i] == 'p' ||  frase[i] == 'pp'){
			frase[i] = 'f';
		}
		if(frase[i] == 's' || frase[i] == 'ss'){
			frase[i] = 'f';	
		}
		if(frase[i] == 'v' || frase[i] == 'vv'){
			frase[i] = 'f';	
		}
		if(frase[i] == 'b' || frase[i] == 'bb'){
			frase[i] = 'f';	
		}
	}
	

	cout << frase;
	return 0;
}
