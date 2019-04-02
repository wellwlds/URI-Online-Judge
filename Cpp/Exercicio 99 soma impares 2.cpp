#include <iostream>

using namespace std;

int main (){
	int n , x , y , i;
	
	for (i = 0 ; i < n ; i++){
	
		cin >> x >> y;
		
		if (x < y){

			if (x%2 == 1){
				while (x < y){
				x+=2;
				}
			}
			else if (x%2 == 0){
				x++;
				while (x < y){
				x+=2;
				}
			}
		cout << x << endl;
		}
		
			if (y < x){	
			
				if (y%2 == 1){
					while (y < x){
					y+=2;
					}
	
				}
				
				else if (y%2 == 0 && y < x){
					y++;
					while (y < x){
					y+=2;
				}

				}
			cout << y << endl;
			}
	}
	return 0;
}
