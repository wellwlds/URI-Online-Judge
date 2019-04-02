#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
	int v , i;
	char hexa[1024];
	cin >> v;
	itoa(v,hexa,16);
	for(i=0;i<1024;i++){
		if(hexa[i]=='a'){
			hexa[i]='A';
		}
		if(hexa[i]=='b'){
			hexa[i]='B';
		}
		if(hexa[i]=='c'){
			hexa[i]='C';
		}
		if(hexa[i]=='d'){
			hexa[i]='D';
		}
		if(hexa[i]=='e'){
			hexa[i]='E';
		}
		if(hexa[i]=='f'){
			hexa[i]='F';
		}
	}
	cout << hexa << endl;
	return 0;
}
