#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	char O;
	double M[12][12] , soma=0;
	int i , j;
	cin >> O;
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			cin >> M[i][j];
			if(j<i and (i+j)>11){
				soma+=M[i][j];	
			}
		}
	}
	if(O=='S'){
		cout << setprecision(1) << fixed << soma << endl;
	}
	if(O=='M'){
		cout << setprecision(1) << fixed << (soma/30) << endl;
	}
}
