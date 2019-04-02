#include <iostream>

using namespace std;

int main (){
	int m , n;
	
	while (cin >> m >> n){
		int fm=1 , fn=1;
		if(m>= 0 && m<=20 && n>=0 && n<=20){
			for (int i=1;i<=m;i++){
				fm=fm*i;
			}
			for (int i=1;i<=n;i++){
				fn=fn*i;
			}
			cout << fm+fn << endl;
		}
	}
	return 0;
}
