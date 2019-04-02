#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int p,i , q , x;
	float total=0;
	
	
	cin >> p;
	
	for(i=0;i<p;i++){
		cin >> x >> q;
		if(x==1001){
			total+=(1.5*q);
		}
		if(x==1002){
			total+=(2.5*q);
		}
		if(x==1003){
			total+=(3.5*q);
		}
		if(x==1004){
			total+=(4.5*q);
		}
		if(x==1005){
			total+=(5.5*q);
		}
	}
	cout << setprecision(2) << fixed << total << endl;
	return 0;
}
