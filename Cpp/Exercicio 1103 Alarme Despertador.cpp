#include <iostream>

using namespace std;

int main (){
	int H1 , M1 , H2 , M2 , min=0;
	
	cin >> H1 >> M1 >> H2 >> M2;
	
	while(H1!=0 and M1!=0 and H2!=0 and M2!=0){
		while(H1<=H2){
				if(M1<M2 and M1<60){
					M1++;
					min++;
				}
				if(M1==60){
					min++;
					H1++;
				}
		}
		cout << min << endl;
	}
	
}
