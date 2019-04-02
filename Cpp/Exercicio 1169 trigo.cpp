    #include <iostream>

    using namespace std;

    int main (){
        int n,x,i,j;
        unsigned long long int  quant;

        cin >> n;

        for(i=0;i<n;i++){
            cin >> x;
            quant=1;
            if(x<64){
             for(j=0;j<x;j++){
                quant=quant*2;
                }
                quant=quant/12;
                quant=quant/1000;
                cout << quant << " kg" << endl;
            }
            if(x==64){
                for(j=0;j<63;j++){
                    quant=quant*2;
                }

                quant=quant/12;
                quant=quant/1000;
                cout << (quant*2)+1 << " kg" << endl;
            }

        }
        return 0;
    }