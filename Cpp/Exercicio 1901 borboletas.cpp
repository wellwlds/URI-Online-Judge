#include <iostream>

using namespace std;

int main (){
	int n , i , j , x , y , ig=1;
	
	cin >> n;
	
	int matriz[n][n] , borb[n*n];
	
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> matriz[i][j];
		}
	}
	for(i=0;i<(n*2);i++){
		cin >> x >> y;
		borb[i] = matriz[x][y];
	}
	cout << endl;
	for(i=0;i<(n*2);i++){
		cout << borb[i] << " ";
	}
	cout << endl;
	for(j=0;j<n;j++){
		for(i=1;i<=n;i++)
		if(borb[j] != borb[i]){
			ig++;	
		}
	}
	cout << ig << endl;	
	return 0;
}
