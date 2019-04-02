#include <iostream>

using namespace std;

int main (){
    char n[10];

    cin >> n;

    int i=0;
    while(n[i]!='\0'){
        i++;
    }
    for(int j=i;j>=0;j--){
        cout << n[j];
    }
    cout << endl;
    return 0;
}