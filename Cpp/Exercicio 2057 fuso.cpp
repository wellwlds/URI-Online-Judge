#include <iostream>

using namespace std;

int main (){
    int s , v, f,r;

    cin >> s >> v >> f;
r=s+v+f;
if(r>24){
    r-=24;
}
else if(r<0){
    r+=24;
}
cout << r << endl;
    return 0;

}