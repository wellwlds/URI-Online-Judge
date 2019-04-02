#include<iostream>

using namespace std;

int main(){
    int p, j1 , j2 , r , a;

    cin >> p >> j1 >> j2 >> r >> a;

    if((j1+j2)%2==0){   //se por par
        if(p==1){              //se ele escolher par
            if(r==0 and a==0){                  //se nao roubar e nao for acusado
                cout << "Jogador 1 ganha!" << endl;
            }
            else if (r==0 and a==1){        //se nao roubar e for acusado
                 cout << "Jogador 1 ganha!" << endl;
            }
            else if(r==1 and a==0){           //se roubar e nao for acusado
                cout << "Jogador 1 ganha!" << endl;
            }
             else if(r==1 and a==1){           //se roubar e for acusado
                cout << "Jogador 2 ganha!" << endl;
            }
        }
        else if (p==0){     //se o j1 escolher impar
           if(r==0 and a==0){                  //se nao roubar e nao for acusado
                cout << "Jogador 2 ganha!" << endl;
            }
            else if (r==0 and a==1){        //se nao roubar e for acusado
                 cout << "Jogador 1 ganha!" << endl;
            }
            else if(r==1 and a==0){           //se roubar e nao for acusado
                cout << "Jogador 1 ganha!" << endl;
            }
             else if(r==1 and a==1){           //se roubar e for acusado
                cout << "Jogador 2 ganha!" << endl;
            }
        }
    }
    else if((j1+j2)%2==1){   //se por impar
        if(p==1){               //se o J1 escolher par
             if(r==0 and a==0){                  //se nao roubar e nao for acusado
                cout << "Jogador 2 ganha!" << endl;
            }
            else if (r==0 and a==1){        //se nao roubar e for acusado
                 cout << "Jogador 1 ganha!" << endl;
            }
            else if(r==1 and a==0){           //se roubar e nao for acusado
                cout << "Jogador 1 ganha!" << endl;
            }
             else if(r==1 and a==1){           //se roubar e for acusado
                cout << "Jogador 2 ganha!" << endl;
            }
        }
        else if (p==0){     //se o j1 escolher impar
            if(r==0 and a==0){                  //se nao roubar e nao for acusado
                cout << "Jogador 1 ganha!" << endl;
            }
            else if (r==0 and a==1){        //se nao roubar e for acusado
                 cout << "Jogador 1 ganha!" << endl;
            }
            else if(r==1 and a==0){           //se roubar e nao for acusado
                cout << "Jogador 1 ganha!" << endl;
            }
             else if(r==1 and a==1){           //se roubar e for acusado
                cout << "Jogador 2 ganha!" << endl;
            }
        }
    }
    return 0;
}