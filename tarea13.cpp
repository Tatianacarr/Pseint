#include <iostream>
using namespace std;
//Angui Fierro
//Desarrolle un programa que lea los elementos de un arreglo de 5 números enteros y, mediante una función que use paso por referencia, calcule la suma total de los elementos. Elegir eliminar un dato según el ingreso por teclado 
void sumarElementos(int arr[], int n, int &suma) {
    suma = 0; // iniciar la suma
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
}

void eliminarDato(int arr[], int &n, int posicion) {
    // esto mueve  los elementos hacia la izquierda
    for (int i = posicion; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // reducir tamaño
}

int main() {

    int numeros[5];
    int n = 5;
    int suma = 0;
    int pos;

    cout << "Ingrese 5 numeros enteros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    sumarElementos(numeros, n, suma);

    cout << "\nLa suma total es: " << suma << endl;
    cout << "\nIngrese la posicion a eliminar (0 a 4): ";
    cin >> pos;
    if (pos < 0 || pos >= n) {
        cout << "Posicion invalida.\n";
        return 0;
    }
    eliminarDato(numeros, n, pos);

    cout << "\nArreglo despues de eliminar el dato:\n";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
