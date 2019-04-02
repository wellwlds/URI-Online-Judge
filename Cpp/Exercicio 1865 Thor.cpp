#include <iostream>

using namespace std;

int main (){
	char nome[6];
	int forca , n;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin.ignore();
		cin >> nome;
		cin >> forca;
		if(nome[1]=='h'){
			cout << "Y" << endl;
		}
		else{
			cout << "N" << endl;
		}
	}
	
	return 0;
}
