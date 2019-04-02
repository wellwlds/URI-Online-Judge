#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double h,p;
	cin >> h >> p;
	cout << setprecision(2) << fixed << h/p << endl;
	return 0;
}