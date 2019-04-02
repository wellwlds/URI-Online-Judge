#include <iostream>

using namespace std;

int main(){
    int h , m , res=0;
    char p;
    while(cin >> h >> p >> m){
        if(h<7 or (h==7 and m==0)){
            cout << "Atraso maximo: 0" << endl;
        }
        else{

            h=h*60;
            res=((h+m)+60)-480;
            cout << "Atraso maximo: " << res << endl;
        }
    }
    return 0;
}