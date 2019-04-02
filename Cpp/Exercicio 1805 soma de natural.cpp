#include <iostream>

using namespace std;

int main (){
	unsigned int A , B;
	cin >> A >> B;
	for(int i=A+1;i<=B;i++){
		A=A+i;
	}
	cout << A << endl;
}
