#include <iostream>

using namespace std;

int main (){
	int n,i;
	cin >> n;
	char diamante[1000];
	
	for(i=0;i<n;i++){
		cin >> diamante;
		int esc=0 , dir=0 , j=0;
		
		while(diamante[j]!='\0'){
			if(diamante[j]=='<'){
				esc++;
			}
			if(diamante[j]=='>'){
				dir++;
			}
			j++;
		}
		if(esc>=dir){
			cout << dir << endl;
		}	
		if(esc < dir){
			cout << esc << endl;
		}
		
	}
	return 0;
}
