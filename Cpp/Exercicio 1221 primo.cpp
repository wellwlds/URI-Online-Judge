    #include <iostream>
    #include <math.h>
    using namespace std;

    int main (){
        int n , i , j, primo, x, v[200], w=0 ,z;
        cin >> n;
        for (i=0;i<n;i++){

            cin >> x;

            if(x%2==0){
                cout <<"Not Prime" << endl;
            }
            else{
                z=0;
            for(int h=0;h<w;h++){
                if(x==v[h]){
                    z=1;
                    break;
                }
            }
            if(z==1){
                cout << "Prime" << endl;
            }
            else{
                primo=1;
                j=1;
                z=sqrt(x);
                while (j <= z){
                    if (x%j == 0){
                    primo++;
                    if(primo>2){
                        break;
                    }
                }

                    j+=2;
                }
            if (primo == 2){
                cout <<"Prime" << endl;
                v[w]=x;
                w++;
            }
            if(primo != 2){
                cout << "Not Prime" << endl;
            }
            }
        }
        }
        return 0;
    }