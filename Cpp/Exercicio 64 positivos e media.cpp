#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main (){
    float valor1 , valor2 , valor3 , valor4 , valor5, valor6 , positivos , contador;
 
    cin >> valor1 >> valor2 >> valor3 >> valor4 >> valor5 >> valor6;
     
    positivos = 0;
    contador  = 0;
     
    if (valor1 > 0){
        contador++;
        positivos = positivos + valor1;
    }
    if (valor2 > 0){
        contador++;
        positivos = positivos + valor2;
    }
    if (valor3 > 0){
        contador++;
        positivos = positivos + valor3;
    }
    if (valor4 > 0){
        contador++;
        positivos = positivos + valor4;
    }
    if (valor5 > 0){
        contador++;
        positivos = positivos + valor5;
    }
    if (valor6 > 0){
        contador++;
        positivos = positivos + valor6;
    }   
    cout << contador << " valores positivos" << endl;
    cout << setprecision(1) << fixed << positivos/contador << endl;
     
    return 0;
}
