#include<iostream>

using namespace std;

int main (){
	int grupo , lesmas , i , veloz;
	
	while(cin >> grupo){
		veloz=0;
		
		for(i=0;i<grupo;i++){
			cin >> lesmas;
			if (lesmas < 10){
				if (lesmas > veloz){
					veloz 	= lesmas;
				}
			}
			if (lesmas >= 10 && lesmas < 20){
				if (lesmas > veloz){
					veloz = lesmas;
				}
			}
			if (lesmas >= 20){
				if (lesmas > veloz){
					veloz = lesmas;
				}
			}
		}
		
		if (veloz < 10){
			cout << "1" << endl;
		}
		if(veloz >= 10 && veloz < 20){
			cout << "2" << endl;
		}
		if (veloz >= 20){
			cout << "3" << endl;
		}
	}
	return 0;
}
