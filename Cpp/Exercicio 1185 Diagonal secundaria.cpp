#include <iostream>
#include <iomanip>
using namespace std;
 
int main (){
    int i , j , divid=0;
    float matriz[12][12] , result=0;
    char O;
     
    cin >> O;
    for(i=0;i<=11;i++){
        for(j=0;j<=11;j++){
            cin >> matriz[i][j];
        	if(i<5 && j>i && (i+j)<11){
        		result+=matriz[i][j];
				divid++;
			}
		}
    }
    if (O == 'S'){
        cout << setprecision(1) << fixed << result << endl;
    }
    if (O == 'M'){
        cout << setprecision(1) << fixed << result/divid << endl;   
    }
     
     
    return 0;
}
