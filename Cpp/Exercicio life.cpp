#include <iostream>
#include <string.h>
using namespace std;

int main (){
	string frase;
	
	frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cout << frase[i];
	}
		cout << endl;
	return 0;
}
