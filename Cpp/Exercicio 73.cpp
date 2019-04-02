#include <iostream>
 
using namespace std;
 
int main (){
    int n , x;
     
    cin >> n;
    x = 2;
    if (n > 5 && n < 2000){
         
        while (x <= n){
         
        cout << x << "^2 = " << x*x << endl;
        x += 2;
        }
                 
    }
     
     
    return 0;
}
