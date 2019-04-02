#include <iostream>

using namespace std;

int main (){
	int q1 , v1[q1] , q2 , v2[q2] , q3 , v3[q3] , q4 , v4[q4] , q5 , v5[q5] , k , i , m1=0 , m2=0 , m3=0 , m4=0 , m5=0;
	
	cin >> q1;
	
	for (i=0;i<q1;i++){
		cin >> v1[i];
		if(v1[i] > m1){
			m1=v1[i];
		}
		
	}
	cin >> q2;
	
	for (i=0;i<q2;i++){
		cin >> v2[i];
		if(v2[i] > m2){
			m2=v2[i];
		}
	}
	cin >> q3;
	
	for (i=0;i<q3;i++){
		cin >> v3[i];
		if(v3[i] > m3){
			m3=v3[i];
		}
	}
	cin >> q4;
	
	for (i=0;i<q4;i++){
		cin >> v4[i];
		if(v4[i] > m4){
			m4=v4[i];
		}
	}
	cin >> q5;
	
	for (i=0;i<q5;i++){
		cin >> v5[i];
		if(v5[i] > m5){
			m5=v5[i];
		}
	}	
	cout << m1+m2+m3+m4+m5 << endl;
	return 0;
}
