#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int t, n , k,cont;
    char a[5],b[2];
    cin>>t;
    for(int i=0;i<t;i++){
        cin >> n;
        cont=0;
        for(int j=0;j<n;j++){
            cin >> a;
            if(strcmp(a,"LEFT")==0){
                cont--;
            }
            else if(strcmp(a,"RIGHT")==0){
                cont++;
            }
            else if(strcmp(a,"SAME")==0){
                cin >> b;
                cin >> k;

            }
        }
    }



    return 0;
}