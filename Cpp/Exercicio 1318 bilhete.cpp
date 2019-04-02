#include <iostream>

using namespace std;

int main (){
    int n , m , i , j, c , k;

    while(cin >> n >> m){
        if(n==0 and m==0){
            return 0;
        }
        int t[m] , r[m]; c=0;
        for(i=0;i<m;i++){
            cin >> t[i];
            r[i]=0;
        }
        for(i=0;i<(m-1);i++){
            k=i+1;
            for(j=k;j<m;j++){
                if((t[i]==t[j]) and (r[i]==0) and t[i]!=0){
                    r[i]=1;
                    t[j]=0;
                    c++;
                }
            }
        }
        cout << c << endl;
    }

}