#include <iostream>
using namespace std;
//Angui Fierro
//Cree un programa que permita almacenar números enteros en un arreglo e implemente una función con paso por valor que cuente cuántos de esos números son pares

int contarPares(int arr[], int n) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // si es par usamos el modulo 
            contador++;
        }
    }
    return contador; 
}

int main() {
    int n;
    cout << "Cantidad de numeros: ";
    cin >> n;
    int numeros[n];

    cout << "Ingrese los numeros:\n";
    for (int i = 0; i < n; i++) { // se almacenan en el arreglo
        cin >> numeros[i];
    }
    
    int pares = contarPares(numeros, n);

    cout << "\nCantidad de numeros pares: " << pares << endl;

    return 0;
}
