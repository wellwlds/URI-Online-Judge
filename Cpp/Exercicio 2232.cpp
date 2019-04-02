#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n,i;
	unsigned int j;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> j;
		j=pow(2,j)-1;
		cout << j << endl;
	}
	return 0;
}