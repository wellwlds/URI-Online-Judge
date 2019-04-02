#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	float i , s=0;
	
	
	for (i=1; i< 101; i++){
	
		s = s + (1/i);

	}
	
	cout << setprecision(2) << fixed << s << endl;

	return 0;
}
