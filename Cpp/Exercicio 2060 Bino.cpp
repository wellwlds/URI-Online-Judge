#include<iostream>

using namespace std;

int main(){
    int n, cont , i , j;
    cin >> n;
    int x[n];

    for(i=0;i<n;i++){
        cin >> x[i];
    }
    for(i=2;i<=5;i++){
        cont=0;
        for(j=0;j<n;j++){
            if(x[j]%i==0){
                cont++;
            }
        }
        cout <<  cont << " Multiplo(s) de " << i << endl;
    }
    return 0;
}