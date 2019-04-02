#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int L , i , j;
	float matriz[12][12] , result=0;
	char T;
	
	cin >> L;
	cin >> T;
	
	for(i=0;i<=11;i++){
		for(j=0;j<=11;j++){
			cin >> matriz[i][j];
		}
	}
	if (T == 'S'){
		for (i=0; i <= 11; i++){
			result = result + matriz[L][i];
		}
		cout << setprecision(1) << fixed << result << endl;
	}
	if (T == 'M'){
		for (i=0;i <= 11; i++){
			result = result + matriz[L][i];
		}
		cout << setprecision(1) << fixed << result/12 << endl;
	}
	
	
	return 0;
}
