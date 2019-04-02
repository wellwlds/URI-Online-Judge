#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char jg1[7], jg2[7];
    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> jg1 >> jg2;

        if(!strcmp(jg1,"ataque")){
            if(!strcmp(jg2,"ataque")){
                cout << "Aniquilacao mutua" << endl;
            }
            else if(!strcmp(jg2,"pedra")){
                cout << "Jogador 1 venceu" << endl;
            }
            else if(!strcmp(jg2,"papel")){
                cout << "Jogador 1 venceu" << endl;
            }
        }
        else if(!strcmp(jg1,"pedra")){
            if(!strcmp(jg2,"ataque")){
                cout << "Jogador 2 venceu" << endl;
            }
            else if(!strcmp(jg2,"pedra")){
                cout << "Sem ganhador" << endl;
            }
            else if(!strcmp(jg2,"papel")){
                cout << "Jogador 1 venceu" << endl;
            }
        }
        else if(!strcmp(jg1,"papel")){
            if(!strcmp(jg2,"ataque")){
                cout << "Jogador 2 venceu" << endl;
            }
            else if(!strcmp(jg2,"pedra")){
                cout << "Jogador 2 venceu" << endl;
            }
            else if(!strcmp(jg2,"papel")){
                cout << "Ambos venceram" << endl;
            }
        }
    }

    return 0;
}