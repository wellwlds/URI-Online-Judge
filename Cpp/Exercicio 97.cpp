#include <iostream>

using namespace std;

int main (){
	float i , j1 , j2 , j3;
	
	j1 = 1;
	j2 = 2;
	j3 = 3;
	
	
	for (i = 0; i < 2.1 ; i+=0.2){
		cout << "I=" << i << " J=" << j1 << endl;
		cout << "I=" << i << " J=" << j2 << endl;
		cout << "I=" << i << " J=" << j3 << endl;
	j1+=0.2;
	j2+=0.2;
	j3+=0.2;
	}
	
	return 0;
}
