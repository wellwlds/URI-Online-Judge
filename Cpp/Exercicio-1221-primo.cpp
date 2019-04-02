#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n , i , j, primo, x , rx;
    cin >> n;
    for (i=0;i<n;i++){
        primo=1;
        j=1;
        cin >> x;

        if(x%2==0){
            cout <<"Not Prime" << endl;

        }
        else{
            rx=sqrt(x);
        while (j <= rx){
            if (x%j == 0){
                primo++;
                if(primo>2){
                    break;
                }
            }

            j++;
        }
        if (primo == 2){
            cout <<"Prime" << endl;
        }
        if(primo != 2){
            cout << "Not Prime" << endl;
        }
        }
    }

    return 0;
}