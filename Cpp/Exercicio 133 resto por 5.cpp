#include <iostream>

using namespace std;

int main (){
	int x , y;
	
	cin >> x >> y;
	
	if (x < y){
	
		while ( x < y){
			x++;
			
			if (x%5 == 2 && x != y || x% 5 == 3 && x != y){
				cout << x << endl;
			}		
		}
	}
	
	else if (y < x){
		
		while (y < x){
			y++;
			
			if (y%5 == 2 && y != x || y% 5 == 3 && x != y){
				cout << y << endl;
			}
		}
	}
	return 0;
}
