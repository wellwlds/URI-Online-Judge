#include <iostream>

using namespace std;

int main (){
	int c , n ,j=0 , soma=1;
	
	cin >> c;
	for (int i=0;i<c;i++){
		cin >> n;
		
		while(j<n){
			if (j%2==0){
				soma++;
			}
			if (j%2==1 || j == 1 ){
				soma--;
			}
			j++;
		}
		cout << soma << endl;
		soma=0;
	}
	return 0;
}
