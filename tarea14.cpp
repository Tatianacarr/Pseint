#include <iostream>
using namespace std;
//Angui Fierro
//Implemente un programa que permita almacenar varios números en un arreglo e identifique, mediante una función que use parámetros por referencia, cuál es el valor mayor del arreglo. 
void encontrarMayor(int arr[], int n, int &mayor) {
    mayor = arr[0];  // el primer valor es el mayor inicialmente

    for (int i = 1; i < n; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar? ";
    cin >> n;
    int numeros[n];
    cout << "Ingrese " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    int mayor;
    encontrarMayor(numeros, n, mayor);
    cout << "\nEl numero mayor es: " << mayor << endl;
    return 0;
}
