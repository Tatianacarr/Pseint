#include <iostream>
using namespace std;
//Angui Fierro
void mostrar(int arr[], int n) {  //  void para mostrar el arreglo
    cout << "Numeros ingresados: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numeros[5];
    cout << "Ingrese 5 numeros enteros:"<<endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }
    mostrar(numeros, 5);

    return 0;
}
