#include <iostream>

using namespace std;

int main (){
	int ano , n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> ano;
		
		if(ano<=2015){
			ano-=2014;
			cout << ano << " D.C." << endl;
		}
		if(ano>2015){
			ano-=2015;
			cout << ano << "A.C." << endl;
		}
	
	}
}
