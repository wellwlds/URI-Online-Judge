#include <iostream>

using namespace std;

int main (){
    int m , n, i , j;
    unsigned long long int fm , fn;
    while (cin >> m >> n){
        fm=1;
        fn=1;
        for (i=1;i<=m;i++){
            fm=fm*i;
        }
        for (j=1;j<=n;j++){
            fn=fn*j;
        }
        cout << fm+fn << endl;
    }
    return 0;
}
