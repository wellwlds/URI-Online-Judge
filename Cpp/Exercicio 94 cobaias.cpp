#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, quant, q;
    float C = 0, R = 0, S = 0, total, pc = 0, pr = 0, ps = 0;;
    char t;
    cin >> q;
    
	for (i=1; i<=q; i++){
            
			cin >> quant >> t;
            total = quant + total;
            
			if (t == 'C'){ 
            	C = quant + C;
			}
            else if (t == 'R'){ 
                R = quant + R;
			}
            else{
                S = quant + S;
			}
    }
                        
						pc = (C / total) * 100;
                        pr = (R / total) * 100;
                        ps = (S / total) * 100;
                         
						 cout << "Total: " << total << " cobaias" << endl;
                         cout << "Total de coelhos: " << C << endl;
                         cout << "Total de ratos: " << R << endl;
                         cout << "Total de sapos: " << S << endl;
                         cout << "Percentual de coelhos: " << setprecision(2) << fixed << pc << " %"<< endl;
                         cout << "Percentual de ratos: " << setprecision(2) << fixed << pr << " %" << endl;
                         cout << "Percentual de sapos: " << setprecision(2) << fixed << ps << " %" << endl;;

return 0;
}
