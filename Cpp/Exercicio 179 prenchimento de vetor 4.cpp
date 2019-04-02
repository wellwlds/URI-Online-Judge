#include <iostream>

using namespace std;

int main (){
	int x , i , j=0 , y , g=0 , impar[5] , par[5];
	
	for (i=0;i<15;i++){
		cin >> x;
		if(x%2==0){
			if(j<5){
				par[j] = x;
				j++;
			}
			if(j == 5){
				par[j]=x;
				for(y=0;y<=4;y++){
					cout << "par[" << y << "] = " << par[y] << endl;
				}
				j=0;
			}
		}
		else if (x%2 == -1 || x%2 == 1){
			if(g<5){
				impar[g]=x;
				g++;
			}
			if (g==5){
				impar[g]=x;
				for(y=0;y<=4;y++){
					cout << "impar[" << y << "] = " << impar[y] << endl;
				}
				g=0;
			}
		}
		
	}
	for(y=0;y<g;y++){			
		cout << "impar[" << y << "] = " << impar[y] << endl;
	}
	
	for (i=0;i<j;i++){
		cout << "par[" << i << "] = " << par[i] << endl;	
	}
	

	return 0;
}
