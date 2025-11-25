#include <iostream>
using namespace std;

int main() {
    int n, pos;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arreglo[n]; 

    for(int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> arreglo[i]; 
    }

    cout << "Ingrese la posicion que desea mostrar: ";
    cin >> pos;

    if(pos >= 0 && pos < n) {
        cout << "Valor en la posicion " << pos << ": " << arreglo[pos] << endl;
    } else {
        cout << "Posicion invalida!" << endl;
    }

    return 0;
}
