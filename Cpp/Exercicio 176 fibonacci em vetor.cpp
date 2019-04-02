#include <iostream>

using namespace std;

int main (){
	unsigned long long int i , n , t , fib[61];
	
	fib[0]=0;
	fib[1]=1;

	for (i=2;i<=60;i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	cin >> t;
	
	for (i=0;i<t;i++){
		cin >> n;
		cout << "Fib(" << n << ") = " << fib[n] << endl;
	}

	return 0;
}
