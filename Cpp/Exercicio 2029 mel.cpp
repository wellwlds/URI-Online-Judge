#include <iostream>
#include <iomanip>
using namespace std;

//v = area x altura ou r² x pi x h

int main (){
    double volume, diametro, altura,area;

    while(cin >> volume >> diametro){
        diametro=diametro/2;
        altura=volume/((diametro*diametro)*3.14);
        area=volume/altura;
        cout << "ALTURA = " << setprecision(2) << fixed << altura << endl;
        cout <<"AREA = " << setprecision(2) << fixed << area << endl;
    }
    return 0;
}