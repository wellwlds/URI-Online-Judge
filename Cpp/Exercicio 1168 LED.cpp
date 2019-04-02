#include <iostream>

using namespace std;

int main (){
	int n , led;
	char numero[128];
	cin >> n;
	
	for(int i=0;i<n;i++){
		led=0;
		cin >> numero;
		int j=0;
		while(numero[j]!='\0'){
			if(numero[j]=='1'){
				led+=2;
			}
			if(numero[j]=='2'){
				led+=5;
			}
			if(numero[j]=='3'){
				led+=5;				
			}
			if(numero[j]=='4'){
				led+=4;	
			}
			if(numero[j]=='5'){
				led+=5;	
			}
			if(numero[j]=='6'){
				led+=6;	
			}
			if(numero[j]=='7'){
				led+=3;	
			}
			if(numero[j]=='8'){
				led+=7;	
			}
			if(numero[j]=='9'){
				led+=6;	
			}
			if(numero[j]=='0'){
				led+=6;	
			}
			j++;
		}
		cout << led << " leds" << endl;
	}
	
	
	
	
	
	return 0;
}
