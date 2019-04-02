#include <iostream>
 
using namespace std;
 
int main (){
    int horai , horaf , total;
    cin >> horai >> horaf;
    if (horai <= 24 && horaf <= 24){      
        if (horai == horaf) {
    total = 24;
        }
    else if (horai > horaf){
    total = (24 - horai) + horaf; 
    }
    else if (horai < horaf) {
    total = horaf - horai;
    }
        cout << "O JOGO DUROU " << total << " HORA(S)" << endl;
}
    return 0;
}
