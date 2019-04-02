#include <iostream>
 
using namespace std;
 
int main (){
    float valor1 , valor2 , valor3 , valor4 , valor5 , valor6 , contador;
    cin >> valor1 >> valor2 >> valor3 >> valor4 >> valor5 >> valor6;
     
    contador = 0;
     
    if (valor1 > 0){
        contador++;
    }
    if (valor2 > 0){
        contador++;
    }
    if (valor3 > 0){
        contador++;
    }
    if (valor4 > 0){
        contador++;
    }
    if (valor5 > 0){
        contador++;
    }
    if (valor6 > 0){
        contador++;
    }
                     
    cout << contador << " valores positivos" << endl;
    return 0;
}
