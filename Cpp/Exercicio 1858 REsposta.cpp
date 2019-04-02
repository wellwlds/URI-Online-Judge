#include <iostream>

using namespace std;

int main (){
	int n;
	cin >> n;
	
	int t[n] , c=21 , id;
	
	for(int i=0;i<n;i++){
		cin >> t[i];
		if(t[i]< c){
			c=t[i];
			id=(i+1);
		}
	}
	cout << id << endl;
	return 0;
}
