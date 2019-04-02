#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int n , j;
	float x;

	x = 0;
	j = 0;
	
	while (n > 0){
		cin >> n;

		if (n > 0){
		x+=n;
		j++;
		}
	}
	cout <<setprecision(2) << fixed << x/j << endl;
	return 0;
}
