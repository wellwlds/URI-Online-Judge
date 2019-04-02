#include <iostream>

using namespace std;

int main (){
	char cpf[14] ;
	int i , j=0 , cont=0 , v[11];
	
	cin >> cpf;
	
	for(i=0;i<14;i++){
		if(cpf[i] == '0' or cpf[i] == '1' or cpf[i] == '2' or cpf[i] == '3' or cpf[i] == '4' or
		   cpf[i] == '5' or cpf[i] == '6' or cpf[i] == '7' or cpf[i] == '8' or cpf[i] == '9'){
			if(cpf[i] == '0'){
				v[j]=0;
				j++;
			}
			if(cpf[i] == '1'){
				v[j]=1;
				j++;
			}
			if(cpf[i] == '2'){
				v[j]=2;
				j++;
			}
			if(cpf[i] == '3'){
				v[j]=3;
				j++;
			}
			if(cpf[i] == '4'){
				v[j]=4;
				j++;
			}
			if(cpf[i] == '5'){
				v[j]=5;
				j++;
			}
			if(cpf[i] == '6'){
				v[j]=6;
				j++;
			}
			if(cpf[i] == '7'){
				v[j]=7;
				j++;
			}
			if(cpf[i] == '8'){
				v[j]=8;
				j++;
			}
			if(cpf[i] == '9'){
				v[j]=9;
				j++;
			}   	
		}
		
	}
	
	
	for(i=1;i<=9;i++){
		cont += v[i-1]*i;
	}
	cont=cont%11;
	if(v[9]!=cont){
		cout << "CPF invalido" << endl;
		return 0;
	}
	cont=0;
	
	for(i=9;i<=1;i--){
		cont += v[i-1]*i;
	}
	cont=cont%11;
	if(v[10]!=cont){
		cout <<  "CPF invalido" << endl;
		return 0;
	}
	
	cout << "CPF valido" << endl;
	return 0;
}
