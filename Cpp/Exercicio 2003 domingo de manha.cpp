#include <iostream>

using namespace std;

int main(){
	int h , m;
	char p;
	while(cin >> h >> p >> m){
		int res=0;
		if(h<7 or (h==7 and m==0)){
			cout << "Atraso maximo: 0" << endl;
		}
		
		else if (h>=7 and h<=8){
			for(int i=0;i<60;i++){
				if(m>=60){
					m=0;
					h++;
				}
				if(h==8){
					res++;
				}
					m++;
				}
				cout << "Atraso maximo: " << res << endl;
		}
		else if (h==9 and m==0){
			cout << "Atraso maximo: 120" << endl;
		}
	}
	return 0;
}
