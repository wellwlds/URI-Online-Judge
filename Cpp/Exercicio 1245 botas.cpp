#include <iostream>

using namespace std;

int main (){
    int n;
    while(cin >> n){

        if((n>=2 and n<=(10000)) and (n%2==0)){
            int tam[n], c=0;
            char pe[n];
            for(int i=0;i<n;i++){
                cin >> tam[i] >> pe[i];
            }
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(tam[i]==tam[j] and tam[i]==0){
                        break;
                    }
                    if(tam[i]==tam[j] and pe[i]!=pe[j]){
                        if(tam[i]>= 30 and tam[i]<=60){
                            tam[i]=0;
                            tam[j]=0;
                            c++;
                        }
                    }
                }
            }
            cout << c << endl;
        }
    }

}