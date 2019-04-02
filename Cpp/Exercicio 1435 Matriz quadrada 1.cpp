
#include <iostream>

using namespace std;

int main (){
	int x=1 , m=1;
	while(x!=0){
		cin >> x;
		
		int m[x][x];
		
		if (x!=0){
			for(int i=0;i<x;i++){
				for(int j=0;j<x;j++){
					if(i==j){
						cout << j;
						cout << " ";
					}
					if(i!=j){
						cout << m;
						cout <<" ";
					}
				}
				cout << endl;
			}
			cout << endl;
		}
	}
}
