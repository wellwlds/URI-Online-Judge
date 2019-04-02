#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
   double R1 , R2 , A , B , C;
	
   cin >> A >> B >> C;

   if(pow(B, 2) - (4 * A * C) >= 0 && A != 0){
      R1 = (-B + sqrt(pow(B, 2) - (4 * A * C))) / (2 * A);
      R2 = (-B - sqrt(pow(B, 2) - (4 * A * C))) / (2 * A);
     
	 cout << "R1 = " << setprecision(5) << fixed << R1 << endl;
 	 cout << "R2 = " << setprecision(5) << fixed << R2 << endl;
   } else {

	cout << "Impossivel calcular" << endl;
   }

   return 0;
}
