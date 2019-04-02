#include <iostream>

using namespace std;

int main (){
	int n , k , i , j , feed;
	
	cin >> n;
	
	for(i=0;i<n;i++){
		cin>> k;
		
		for(j=0;j<k;j++){
			cin >> feed;
			
			if (feed==1){
				cout << "Rolien" << endl;
			}
			if (feed==2){
				cout << "Naej" << endl;
			}
			if (feed==3){
				cout << "Elehcim" << endl;
			}
			if (feed==4){
				cout << "Odranoel" << endl;
			}
		}
	}
	return 0;
}
