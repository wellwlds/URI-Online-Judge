#include <iostream>
 
using namespace std;
 
int main (){
    int valor1 , valor2 , valor3 , valor4 , valor5 , contador;
    cin >> valor1 >> valor2 >> valor3 >> valor4 >> valor5;
     
    contador = 0;
     
    if (valor1%2 == 0){
        contador++;
    }
    if (valor2%2 == 0){
        contador++;
    }
    if (valor3%2 == 0){
        contador++;
    }
    if (valor4%2 == 0){
        contador++;
    }
    if (valor5%2 == 0){
        contador++;
    }
                     
    cout << contador << " valores pares" << endl;
    return 0;
}
