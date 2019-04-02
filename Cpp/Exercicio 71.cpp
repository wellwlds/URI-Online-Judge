#include <iostream>
 
using namespace std;
 
int main (){
    int x , y , contador , n , i;
     
    cin >> n;
    
    for (i = 0; i <= n; i++){
    
	cin >> x >> y;
    
    contador = 0;
     
    if (x < y && x%2 == 1 || x < y && x%2 == -1){
        while (x < y){
             
            x = x + 2;
            contador = contador + x;
             
                     
        }
        cout << contador - x << endl;
    }
    else if (x < y && x%2 == 0){
         
        x = x + 1;
         
        while (x < y){
            x = x + 2;
            contador = contador + x;
         
             
        }
        cout << contador - x<< endl;
    }
     
    else if (y < x && y%2 == 1 || y < x && y%2 == -1){
        while (y < x){
            y = y + 2;
            contador = contador + y;
        }
        cout << contador - y<< endl;
    }
    
    else if (y < x && y%2 == 0){
        y = y + 1;
         
        while (y < x){
            y = y + 2;
            contador = contador + y;
        }
        cout << contador -y<< endl;
    }
 }
     
    return 0;
}
