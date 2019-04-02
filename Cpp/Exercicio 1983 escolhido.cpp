#include <iostream>

using namespace std;

int main (){
    int n,i,j;
    cin >> n;
    int a[n];
    float v[n],m=7.9;

    for(i=0;i<n;i++){
        cin >> a[i] >> v[i];
        if(v[i]>m){
            m=v[i];
            j=i;
        }
    }

    if(m>=8){
        cout << a[j] << endl;
    }
    else{
        cout << "Minimum note not reached" << endl;
    }
    return 0;
}