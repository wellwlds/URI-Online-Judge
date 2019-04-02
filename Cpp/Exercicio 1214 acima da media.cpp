#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int c , i , j , k , n;
	float media , x=0;
	
	cin >> c;
	
	for(i=0;i<c;i++){
		cin >> n;
		float alunos[n] , soma=0;
		for (j=0;j<n;j++){
			cin >> alunos[j];
			soma = soma + alunos[j];
		}
		media = soma/n;
		
		for(k=0;k<n;k++){
			if(alunos[k]>media){
				x++;
			}
		}
		cout << setprecision(3) << fixed << (x*100)/n << "%" << endl;
		x=0;
	}

	return 0;
}
