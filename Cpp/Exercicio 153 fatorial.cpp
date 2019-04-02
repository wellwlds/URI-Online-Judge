	#include <iostream>
	
	using namespace std;
	
	int main (){
		int n , i , nf;
		
		cin >> n;
		
		//fatoral = N * (N-1) * (N-2) ... * 1
		
		if (n > 0 && n < 13){
		nf = n;
			for (i = 1; i < n; i++){
				nf = nf*i;
			}
		cout << nf << endl;
	}
		return 0;
	}
