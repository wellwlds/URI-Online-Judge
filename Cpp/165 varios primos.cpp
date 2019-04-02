#include <iostream>

using namespace std;

int main (){
	int n , i , x , j , primo;
	
	cin >> n;
	for (i=0;i<n;i++){
		primo=0;
		j=1;
		cin >> x;
		
		while (j <= x){
			if (x%j == 0 || x/j == x){
				primo++;
			}
			j++;
		}
		if (primo == 2){
			cout << x << " eh primo" << endl;
		}
		else {
			cout << x << " nao eh primo" << endl;
		}
	}
	
	return 0;
}
