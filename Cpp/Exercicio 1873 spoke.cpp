#include <iostream>
#include <string.h>
using namespace std;


int main (){
    int i , C;
    char shel[15] , raj[15];

    cin >> C;
    for(i=1;i<=C;i++){
        cin >> raj >> shel;
        if (strcmp(raj , "pedra")==0){
            if (strcmp(shel , "papel")==0 || strcmp(shel , "spock")==0){
                cout << "sheldon" << endl;
            }
            if (strcmp(shel , "lagarto")==0 || strcmp(shel , "tesoura")==0){
                cout << "rajesh" << endl;
            }
            if (strcmp(shel , "pedra")==0){
                cout << "empate" << endl;
            }
        }
        if (strcmp(raj , "lagarto")==0){
            if (strcmp(shel , "pedra")==0 || strcmp(shel , "tesoura")==0){
                cout << "sheldon" << endl;
            }
            if (strcmp(shel , "papel")==0 || strcmp(shel , "spock")==0){
                cout << "rajesh" << endl;
            }
            if (strcmp(shel , "lagarto")==0){
                cout << "empate" << endl;
            }
        }
        if (strcmp(raj , "spock")==0){
            if (strcmp(shel , "papel")==0 || strcmp(shel , "lagarto")==0){
                cout << "sheldon" << endl;
            }
            if (strcmp(shel , "pedra")==0 || strcmp(shel , "tesoura")==0){
                cout << "rajesh" << endl;
            }
            if (strcmp(shel , "spock")==0){
                cout << "empate" << endl;
            }
        }
        if (strcmp(raj , "tesoura")==0){
            if (strcmp(shel , "pedra")==0 || strcmp(shel , "spock")==0){
                cout << "sheldon" << endl;
            }
            if (strcmp(shel , "papel")==0 || strcmp(shel , "lagarto")==0){
                cout << "rajesh" << endl;
            }
            if (strcmp(shel , "tesoura")==0){
                cout << "empate" << endl;
            }
        }
        if (strcmp(raj , "papel")==0){
            if (strcmp(shel , "tesoura")==0 || strcmp(shel , "lagarto")==0){
                cout << "sheldon" << endl;
            }
            if (strcmp(shel , "pedra")==0 || strcmp(shel , "spock")==0){
                cout << "rajesh" << endl;
            }
            if (strcmp(shel , "papel")==0){
                cout << "empate" << endl;
            }
        }

    }
    return 0;
}