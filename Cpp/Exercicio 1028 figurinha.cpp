#include <iostream>

using namespace std;

int main (){
	int n;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		int f1 , f2 , d=2;
		cin >> f1 >> f2;
		
		while(1){
			if(f1%d==0 and f1%d==0){
				f1/=d;
				f2/=d;
				d++;
			}
			else{
				break;
			}
		}
		cout << d << endl;	
	}
	return 0;
}
