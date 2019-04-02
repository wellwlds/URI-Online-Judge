#include <iostream>

using namespace std;

int main (){
	int l=1 , r=1 , i;
	
	while(l!=0 && r!=0){
		cin >> l >> r;
		
		if(l>=1 && l<=5 && r>=1 && r<=5){
			cout << l+r << endl;
		}
	}
	return 0;
}
