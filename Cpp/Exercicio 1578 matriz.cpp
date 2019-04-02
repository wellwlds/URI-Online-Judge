#include <iostream>

using namespace std;

int main() {
    unsigned int a[20][20];
    int n , m, i, j, k;

    cin >> n;

    for(i=0;i<n;i++){
        cin >> m;

        for(j=0;j<m;j++){
            for(k=0;k<m;k++){
                cin >> a[j][k];
                a[j][k]=(a[j][k]*a[j][k]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << "Quadrado da matriz #" << (i+4) << ":" << endl;
        for(j=0;j<m;j++){
            for(k=0;k<m;k++){
                if(k==m-1){
                    cout << a[j][k];
                }
                else{
                cout << a[j][k] << " ";
                }
             }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}