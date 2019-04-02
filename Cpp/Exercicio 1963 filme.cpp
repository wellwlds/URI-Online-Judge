#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main(){
    double a , b ,res;
    cin >> a >> b;
    res=(b-a);
    res=res/a;
    res*=100;
    cout << setprecision(2) << fixed << res << "%" << endl;
    return 0;
}