#include <iostream>

using namespace std;

int main (){
	int a , b , c;
	
	while(cin >> a >> b >> c){
		if(a>=0 && a<=1 && b>=0 && b<=1 && c>=0 && c<=1){
			if(a==b && b!=c){
				cout << "C" << endl;
			}
			if(a==c && b!=c){
				cout << "B" << endl;
			}
			if(b==c && a!=c){
				cout << "A" << endl;
			}
			if(a==b && a==c){
				cout << "*" << endl;
			}
		}
	}
	return 0;
}
