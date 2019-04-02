#include <iostream>

using namespace std;

int main (){
	unsigned long long int a , b;
	
	
	while(cin >> a >> b){
		if(a>=b){
			cout << a-b << endl;
		}
		if(b>a){
			cout << b-a << endl;
		}
	}
	return 0;
}
