#include <iostream>

using namespace std;

int main(){
    int n, i , cont;
    float q;
    cin >> n;

    for(i=0;i<n;i++){
        cont=0;
        cin >> q;
        while(q>1){
            q=q/2;
            cont++;
        }
        cout << cont << " dias" << endl;
    }
}