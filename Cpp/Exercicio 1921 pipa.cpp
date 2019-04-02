#include <iostream>

using namespace std;

int main(){
    while(1){
    unsigned int i , n , c=0;

    cin >> n;
    for(i=0;i<n;i++){
        c+=i;
    }
    cout << c-n << endl;

}
    return 0;
}