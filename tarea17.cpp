#include <iostream>
#include <iomanip>   // para setprecision usamos esta biblioteca
using namespace std;
//Angui Fierro
//La función deberá recibir el arreglo y su tamaño, calcular el promedio y devolverlo como double
double calcularPromedio(int arr[], int n) {
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }

    return suma / n; // esta da el promedio
}

int main() {
    int n;
    cout << "Cantidad de numeros: ";
    cin >> n;
    int numeros[n];
    cout << "Ingrese los numeros:\n"; //se almacenan en el arreglo los datos 
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    double promedio = calcularPromedio(numeros, n);
    // se muestra  con dos decimales
    cout << fixed << setprecision(2);
    cout << "\nEl promedio es: " << promedio << endl;

    return 0;
}
