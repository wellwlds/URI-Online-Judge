#include <iostream>

using namespace std;

int main (){
	long int num , inverso=0 , lembrar;

	cin >> num;
		
	while(num>0){
		lembrar=num%10;
		inverso=inverso*10+lembrar;
		num/=10;
	}
	cout << inverso << endl;
	return 0;
}
