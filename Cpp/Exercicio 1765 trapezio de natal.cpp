#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int caso=1 , j , i;
	float a , b , qtd , icecream , h=5.00;
	while (caso != 0){
		cin >> caso;
		if (caso != 0){
			for(i=1;i<=caso;i++){
				cin >> qtd >> a >> b;
				
				icecream = (((a+b)/2.00)*h)*qtd;
				
				cout << "Size #" << i << ":" << endl;
				cout << "Ice Cream Used: " << setprecision(2) << fixed << icecream << " cm2" << endl; 
			}
			cout << endl;
		}
	}
	return 0;
}
