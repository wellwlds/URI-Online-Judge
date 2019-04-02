#include <iostream>

using namespace std;

int main(){
	
	uint32_t a , b;
	
	while(cin >> a >> b){
		uint32_t carry = (a & b) << 1;
		uint32_t s = a + b - carry;	
		cout << s << endl;
	}
	
	return 0;
}
