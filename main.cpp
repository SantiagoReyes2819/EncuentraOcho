// programa para saber cuantos numeros 8 hay

#include <iostream>
using namespace std;

int main() {
    // Cantidad de numeros 
    int n, x;
    // Lecturas de los numeros 
    cin >> n;           

    
    int hay;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 8) {
            // si el numero es 8 lo marca 
            cout<<"1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}
