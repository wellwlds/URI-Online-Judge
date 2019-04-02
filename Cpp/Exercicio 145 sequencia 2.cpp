#include <iostream>

using namespace std;

int main (){
	int x , y , i=1 , linha=0;
	
	cin >> x >> y;
	
	while (i <= y){
		if (linha==(x-1)){
			cout << i << endl;
			linha=0;
		}
		else{
			cout << i <<" ";
			linha++;
		}
		i++;
	}
	return 0;
}


