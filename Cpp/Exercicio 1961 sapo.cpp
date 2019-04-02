#include <iostream>

using namespace std;
int main(){
    int p, n,c, i;

    cin >> p >> n;
    if((p>=1 and p<=5) and (n>=2 and n<=100)){
    int x[n];
    for(i=0;i<n;i++){
        cin >> x[i];
    }
    for(i=0;i<(n-1);i++){
        if((x[i+1]-x[i])>0){
            if((x[i+1]-x[i])>p){
                c=1;
                break;
            }
        }
            else if(x[i]-x[i+1]>0){
                if(x[i]-x[i+1]>p){
                     c=1;
                break;
            }
        }
    }
    if(c==1){
        cout <<"GAME OVER" << endl;
    }
    else{
        cout << "YOU WIN" << endl;
    }
}
    return 0;
}