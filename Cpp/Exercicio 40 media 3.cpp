#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	float n1 , n2 , n3 , n4 , peso1 , peso2 , peso3 , peso4 , media , exame , nexame;
	peso1 = 2;
	peso2 = 3;
	peso3 = 4;
	peso4 = 1;
	cin >> n1 >> n2 >> n3 >> n4;
	media = ((n1*peso1) + (n2*peso2) + (n3*peso3) + (n4*peso4))/ (peso1 + peso2 + peso3 + peso4);
		cout << "Media: " << setprecision(1) << fixed << media << endl;
	if (media >= 7.0) {
		cout << "Aluno aprovado." << endl;
	}
	else if (media < 5.0) {
		cout << "Aluno reprovado." << endl;
	}
	else if (media >= 5.0 && media <=6.9){
		cout << "Aluno em exame." << endl;
		cin >> exame;
		nexame = (media+exame)/2;
	 	cout << "Nota do exame: " << setprecision(1) << fixed << exame << endl;
	 	if (nexame >= 5.0) {
	 		cout << "Aluno aprovado." << endl; }
	 		else {
	 			cout << "Aluno reprovado." << endl;
			 
			}
		 cout << "Media final: " << setprecision(1) << fixed << nexame << endl;
		 }
	

	
	return 0;
}
