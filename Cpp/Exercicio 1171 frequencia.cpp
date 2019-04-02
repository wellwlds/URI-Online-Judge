#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n],i,j,cont;

    for(i=0;i<n;i++){
        cin >> v[i];
    }

    for(i=0;i<(n-1);i++){
        cont=0;
        for(j=(i+1);j<n;j++){
            if(v[i]==v[j]){
                cont++;
            }
        }
        cout << v[i] << " aparece " << cont << " vez(es)" << endl;
    }
    return 0;
}