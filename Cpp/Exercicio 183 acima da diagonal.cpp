#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int inicio=1 , i , j , divid=0;
	float matriz[12][12] , result=0;
	char O;
	
	cin >> O;

	for(i=0;i<=11;i++){
		for(j=0;j<=11;j++){
			cin >> matriz[i][j];
			if(j>i){
				result = result + matriz[i][j];
			}
		}
	}

	if (O == 's'){
		cout << setprecision(1) << fixed << result << endl;
	}
	if (O == 'm'){
		cout << setprecision(1) << fixed << result/divid << endl;	
	}
	
	
	return 0;
}
