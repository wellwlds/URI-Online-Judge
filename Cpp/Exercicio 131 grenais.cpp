#include <iostream>

using namespace std;

int main (){
	int inter , gremio , vinter=0 , vgremio=0 , e=0, resposta , grenais=0 ;

	while (resposta != 2){
		cin >> inter >> gremio;
		
		if (inter > gremio){
			vinter++;
		}
		else if  (gremio > inter){
			vgremio++;
		}
		else if (gremio == inter){
			e++;
		}
		grenais++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> resposta;
	}
	cout << grenais << " grenais" << endl;
	cout << "Inter:" << vinter << endl;
	cout << "Gremio:" << vgremio << endl;
	cout << "Empates:" << e << endl;
	
	if (vgremio > vinter){
		cout << "Gremio venceu mais" << endl;
	}
	else if (vinter > vgremio){
		cout << "Inter venceu mais" << endl;
	}

	return 0;
}
