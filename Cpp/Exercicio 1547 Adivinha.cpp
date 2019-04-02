#include <iostream>

using namespace std;

int main (){
	int n , q , r , num , i , j;
	
	cin >> n;
	
	for(j=0;j<n;j++){
		cin >> q;
		cin >> num;
		
		for(i=0;i<q || r == num || r == num+1 || r == num-1;i++){
			cin >> r;
			if(r == num || r == num+1 || r == num-1){
				cout << i+1	 << endl;			
			} 
		}

	}
	
	
	
	return 0;
}
