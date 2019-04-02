#include <iostream>

using namespace std;

int main (){
	int a , b , c;
	cin >> a >> b >> c;
	if (a < b && a < c && b < c){
		cout << a << "\n" << b << "\n"<< c << endl;}	
		else if (a < b && a < c && b > c){
			cout << a << "\n" << c << "\n" << b << endl;}
			else if (b < a && b < c && a < c){
				cout << b << "\n" << a << "\n" << c << endl;}
					else if (b < a && b < c && a > c){
						cout << b << "\n" << c << "\n" << a << endl;}
							else if (c < b && c < a && b < a){
								cout << c << "\n" << b << "\n" << a << endl;}
									else if (c < b && c < a && b > a){
										cout << c << "\n" << a << "\n" << b << endl;}
		
	cout << "\n" << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
