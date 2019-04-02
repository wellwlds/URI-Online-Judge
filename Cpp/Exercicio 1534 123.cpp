#include <iostream>
#include <iomanip>
using namespace std;
 
int main (){
    int i , j , n;
     
    while(cin >> n){
    int matriz[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
			if((i+j)==(n-1)){
				matriz[i][j]=2;
			}
			else if(j==i){
        		matriz[i][j]=1;
			}

			else{
				matriz[i][j]=3;
			}
			
			cout << matriz[i][j];
			
		}
		cout << endl;
	}
    

 }
    return 0;
}
