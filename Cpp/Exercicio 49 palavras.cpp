#include <iostream>
#include <string>

using namespace std;


int main () {
	
	string palavra1 , palavra2 , palavra3;
	
	cin >> palavra1; 
	cin >> palavra2; 
	cin >> palavra3;

	if (palavra1 == "vertebrado"){
	if (palavra2 == "ave"){
	if (palavra3 == "carnivoro"){
		cout << "aguia" << endl;
	}
	if (palavra3 == "onivoro"){
		cout << "pombo" << endl;
	}
}


		if (palavra2 == "mamifero"){
		if (palavra3 == "onivoro"){
			cout << "homem" << endl;
	}
		if (palavra3 == "herbivoro"){
			cout << "vaca" << endl;
	}
}
}
		if (palavra1 == "invertebrado"){
		if (palavra2 == "inseto"){
		if (palavra3 == "hematofago"){
			cout << "pulga" << endl;
	}
		if (palavra3 == "herbivoro"){
			cout << "lagarta" << endl;
	}
}



		if (palavra2 == "anelideo"){
		if (palavra3 == "hematofago"){ 
			cout << "sanguessuga" << endl;
	}
		if (palavra3 == "onivoro"){
			cout << "minhoca" << endl;
	}
}
}

	return 0;
}	
