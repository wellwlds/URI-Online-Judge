#include<iostream>
#include<string.h>
using namespace std;

int main(){
    unsigned int n, m , i , j;
    char resposta[6];

    cin >> n >> m;

    for(i=0;i<m;i++){
        cin >> resposta;
        if(strcmp(resposta,"clicou") ==0){
            n--;
        }
        if(strcmp(resposta,"fechou") ==0){
            n++;
        }
    }
    cout << n << endl;
    return 0;
}