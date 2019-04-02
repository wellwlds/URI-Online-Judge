#include <iostream>

using namespace std;

int main (){
	int n=1 , x , y , i , moeda;
	
	while(n != 0){
		x=0;
		y=0;
		cin >> n;
		
		for(i=0;i<n;i++){
			cin >> moeda;
			
			if(moeda==0){
				x++;
			}
			if(moeda==1){
				y++;
			}
		}
		if (x>0 && y>0 || x==0 && y>0 || x>0 && y==0){
			cout << "Mary won " << x << " times and John won " << y << " times" << endl;
		}	
	}
	return 0;
}
