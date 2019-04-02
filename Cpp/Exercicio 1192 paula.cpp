#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int i,n,b,c,d;
    string a[3];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        d=a[1];
            if(a[0]=='0'){
                b=0;
            }
            else if(a[0]=='1'){
                b=1;
            }
            else if(a[0]=='2'){
                b=2;
            }
            else if(a[0]=='3'){
                b=3;
            }
            else if(a[0]=='4'){
                b=4;
            }
            else if(a[0]=='5'){
                b=5;
            }
            else if(a[0]=='6'){
                b=6;
            }
            else if(a[0]=='7'){
                b=7;
            }
            else if(a[0]=='8'){
                b=8;
            }
            else if(a[0]=='9'){
                b=9;
            }
            if(a[2]=='0'){
                c=0;
            }
            else if(a[2]=='1'){
                c=1;
            }
            else if(a[2]=='2'){
                c=2;
            }
            else if(a[2]=='3'){
                c=3;
            }
            else if(a[2]=='4'){
                c=4;
            }
            else if(a[2]=='5'){
                c=5;
            }
            else if(a[2]=='6'){
                c=6;
            }
            else if(a[2]=='7'){
                c=7;
            }
            else if(a[2]=='8'){
                c=8;
            }
            else if(a[2]=='9'){
                c=9;
            }

        if(b==c){
            cout << b*c << endl;
        }
        else if(d>=65 and d<=90){
            cout << c-b << endl;
        }
        else if(d>=97 and d<=122){
            cout << c+b << endl;
        }
    }
    return 0;
}