#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int ano, anoi , n , i;

	cin >> n;
	for(i=0;i<n;i++){
		ano=2014;
		cin >> anoi;
		ano-=anoi;
		if(ano>0){
			ano++;
			cout << ano << " D.C." << endl;
		}
		else{
			cout << abs(ano) << " A.C." << endl;
		}
	}

	return 0;
}
