#include <iostream>

using namespace std;

int main (){
	int n , i , x , j;
	int primo;
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
			cout <<"Prime" << endl;
		}
		else {
			cout << "Not Prime" << endl;
		}
	}
	
	return 0;
}
