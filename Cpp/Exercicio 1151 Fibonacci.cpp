#include <iostream>

using namespace std;

int main(){
	int n , a , b , aux;
	a = 0;
	b = 1;
	
	cin >> n;
 	
	for(int i=0;i<n;i++){
    	
		if(i==0 || i==1){
      		cout << i << " ";
    	}
    	
		else if(i==n-1){
    		aux = a + b;
    		a = b;
    		b = aux;
    		cout << aux << endl;
    	}

    	else {
    		aux = a + b;
    		a = b;
   			b = aux;
    		cout << aux << " ";
    	}
 	}	   
return 0;
}
