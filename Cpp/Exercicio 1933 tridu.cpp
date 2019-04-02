#include <iostream>

using namespace std;

int main (){
	int a , b;
	
	cin >> a >> b;
	
	if (a>=b){
		cout << a << endl;
		return 0;
	}
	if(b>a){
		cout << b << endl;
		return 0;
	}
}
