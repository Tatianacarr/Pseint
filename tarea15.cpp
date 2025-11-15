#include <iostream>
using namespace std;
//Angui Fierro
//Escriba un programa que almacene varios números en un arreglo y, mediante una función con parámetros por valor, multiplique cada elemento por un número ingresado 
void multiplicar(int arr[], int n, int num) {
    cout << "\nResultados:\n"; //aqui se mostraran los resultados de la multiplicacion en si se almacenaran
    for (int i = 0; i < n; i++) {
        cout << arr[i] * num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Cantidad de numeros: ";
    cin >> n;
    int arreglo[n];
    cout << "Ingrese los numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i]; // se guardan los numeros dados por teclado
    }
    int numero;
    cout << "Numero a multiplicar: ";
    cin >> numero;
    multiplicar(arreglo, n, numero);
    cout << "\nArreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;
}
