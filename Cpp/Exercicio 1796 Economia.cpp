#include <iostream>

using namespace std;

int main (){
	int q , v , i , povo=0 , oto=0;
	
	cin >> q;
	
	for (i=0;i<q;i++){
		cin >> v;
		
		if(v==0){
			povo++;
		}
		else{
			oto++;
		}
	}
	if(povo>oto){
		cout << "Y" << endl;
	}
	else{
		cout << "N" << endl;
	}
	return 0;
}
