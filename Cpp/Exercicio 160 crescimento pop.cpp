#include <iostream>

using namespace std;

int main (){
	int T , i , ano , PA , PB ;
	float G1 , G2;
	
	cin >> T;
	
	for (i=0;i<T;i++){
		cin >> PA >> PB >> G1 >> G2;
		
	
			for(ano=0;PA<=PB && ano <= 100;ano++){

				PA = PA + (PA*(G1/100));
				PB = PB + (PB*(G2/100));
				
			}
			
			if (ano <= 100){
				cout << ano << " anos." << endl;
			}
					
			if (ano > 100){
				cout << "Mais de 1 seculo." << endl;
			}

	}
	
	
	return 0;
}
