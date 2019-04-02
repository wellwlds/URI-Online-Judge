#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	float x , y; 
	int i , r;
	
	y = 0;
	
	for (i = 0; r != 2 ; i++){
		cin >> x;
		
		if (x >= 0 && x <= 10){
			y+=x;
		}
	
		else if (x < 0 || x > 10){
			cout << "nota invalida" << endl;
			i--;
		}
		
		if (i == 2){
			cout << "media = " << setprecision(2) << fixed << y/i << endl;			
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> r;
				
				if (r == 1){
					i = 0;	
				}
		}
		

	}


	
	
	if (r == 1)
	return 0;
	
}
