#include<iostream>

using namespace std;

int main(){
	int a,b,c;

	cin >> a >> b >> c;

	if(((a-b==0) or (a-c==0) or (b-c==0)) or ((a+b-c==0) or (a+c-b==0) or (b+c-a==0))){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}
	return 0;
}