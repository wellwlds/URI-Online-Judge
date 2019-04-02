#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char pal[10];
    int i,c,x;

//x=0 CONTINUA
//x=1 TEM UM CAW CAW
    for(i=0;i<3;i++){
        x=0;
        while(1){
            cin.getline(pal,10);
            if(strcmp(pal,"--*")==0){
                if(x==1){
                    break;
                }
                c+=1;
                x=0;

            }
            if(strcmp(pal,"-*-")==0){
                c+=2;
                x=0;
            }
            if(strcmp(pal,"-**")==0){
                c+=3;
                x=0;
            }
            if(strcmp(pal,"*--")==0){
                c+=4;
                x=0;
            }
            if(strcmp(pal,"*-*")==0){
                c+=5;
                x=0;
            }
            if(strcmp(pal,"**-")==0){
                c+=6;
                x=0;
            }
            if(strcmp(pal,"***")==0){
                c+=7;
                x=0;
            }
            if(strcmp(pal,"caw caw")==0){
                if(x==0){
                    x=1;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}