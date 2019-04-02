#include <iostream>
#include <math.h>

using namespace std;

int main (){
	int x , y , n , i , r , b , c;
	
	cin >> n;
	
	for (i=0;i<n;i++){
		cin >> x >> y;
		r = pow((3*x),2) + pow(y,2);
		b = 2*pow(x,2) + pow(5*y,2);
		c = -100*x + pow(y,3);
		
		if(r > b && r>c){
			cout << "Rafael ganhou" << endl;
		}
		if(b>r && b>c){
			cout << "Beto ganhou" << endl;
		}
		if(c>r && c>b){
			cout << "Carlos ganhou" << endl;
		}
	}
	
}
