#include <iostream>

using namespace std;

int main (){
    int n , l;
    unsigned int p;
    cin >> n >> l;
    if((n>=3 and n<=1000000) and (l>=1 and l<=4000)){
        p=n*l;
        cout << p << endl;
    }
    return 0;
}