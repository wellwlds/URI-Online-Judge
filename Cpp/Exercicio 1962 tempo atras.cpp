#include <iostream>

using namespace std;

int main (){
    unsigned int ano , n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> ano;

        if(ano>=1 and ano<2015){
            ano-=2015;
            ano=ano*(-1);
            cout << ano << " D.C." << endl;
        }
        else if(ano>=2015){
            ano-=2014;
            cout << ano << " A.C." << endl;
        }
        else if(ano==0){
            cout << "2015 D.C." << endl;
        }

    }
}