#include <iostream>

using namespace std;

int main (){
	int n , pulo;
	cin >> n;
	char palavra[50];
	for(int i=0;i<n;i++){
		cin >> palavra;
		cin >> pulo;
		int j=0;
		
		while(palavra[j]!='\0'){
			if((int(palavra[j] - 65)) >= pulo){
				palavra[j]-=pulo;
			}
			else if((int(palavra[j] - 65)) < pulo){
				palavra[j]+=26;
				palavra[j]-=pulo;
			}
			j++;
		}
		cout << palavra << endl;
	}
	return 0;
}
