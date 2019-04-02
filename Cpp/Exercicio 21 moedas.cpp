#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
   
using namespace std;
   
int main(){
    int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,m100=0,m50=0,m25=0,m10=0,m5=0,m1=0;
    double n;
    cin >> n;
     
    int aux = 0;
    double float_part, int_part = 0;
    int aux1 = 0;
    
    float_part = modf(n, &int_part) * 100;
    aux1 = int(float_part + 0.01);
    aux = int_part;
     
    n100 = aux%100;
    n100 = (aux - n100)/100;
    aux = aux - (n100*100);
     
    n50 = aux%50;
    n50 = (aux - n50)/50;
    aux = aux - (n50*50);
     
    n20 = aux%20;
    n20 = (aux - n20)/20;
    aux = aux - (n20*20);
     
    n10 = aux%10;
    n10 = (aux - n10)/10;
    aux = aux - (n10*10);
     
    n5 = aux%5;
    n5 = (aux - n5)/5;
    aux = aux - (n5*5);
     
    n2 = aux%2;
    n2 = (aux - n2)/2;
    aux = aux - (n2*2);
     
    aux1 = aux1 + (aux*100);
 
    m100 = aux1%100;
    m100 = (aux1 - m100)/100;
    aux1 = aux1 - (m100*100);
     
    m50 = aux1%50;
    m50 = (aux1 - m50)/50;
    aux1 = aux1 - (m50*50);
     
    m25 = aux1%25;
    m25 = (aux1 - m25)/25;
    aux1 = aux1 - (m25*25);
     
    m10 = aux1%10;
    m10 = (aux1 - m10)/10;
    aux1 = aux1 - (m10*10);
     
    m5 = aux1%5;
    m5 = (aux1 - m5)/5;
    m1 = aux1 - (m5*5);
     
    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m100 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m1 << " moeda(s) de R$ 0.01" << endl;
    system("pause");
    return 0;
}
