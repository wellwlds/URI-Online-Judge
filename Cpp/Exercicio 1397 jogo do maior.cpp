#include <iostream>

using namespace std;

int main (){
	int n=1 , a , b , i;
	
	while(n!= 0){
		int ma=0 , mb=0;
		cin >> n;
		
		if(n!=0){
			for(i=0;i<n;i++){
				cin >> a >> b;	
				if(a>b){
					ma++;
				}
				if(b>a){
					mb++;
				}
			}
			cout << ma << " " << mb << endl;
		}		
	}
	return 0;
}
