#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char j1[100], j2[100], r1[6],r2[6];
    int i, n , n1 , n2;

    cin >> n;

    for(i=0;i<n;i++){
        cin >> j1 >> r1 >> j2 >> r2;
        cin >> n1 >> n2;
        n1=n1+n2;
        if(n1%2==0){
            if(strcmp(r1,"PAR")==0){
                cout << j1 << endl;
            }
            else{
                cout << j2 << endl;
            }
        }
        else{
            if(strcmp(r1,"IMPAR")==0){
                cout << j1 << endl;
            }
            else{
                cout << j2 << endl;
            }
        }
    }
    return 0;
}