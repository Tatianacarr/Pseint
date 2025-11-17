#include <iostream>
using namespace std;
//creaar funciones 
//Angui Fierro 
void ingresarDatos(float precios[], int n) {
    cout << "--- Ingreso de precios ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el precio " << i + 1 << ": ";
        cin >> precios[i];
    }
}
void encontrarMayorMenor(float precios[], int n, float &mayor, float &menor) {
    mayor = precios[0];
    menor = precios[0];

    for (int i = 1; i < n; i++) {
        if (precios[i] > mayor)
            mayor = precios[i];
        if (precios[i] < menor)
            menor = precios[i];
    }
}
void mostrarDatosProgramador() {
    cout << "--- Datos del programador ---"<<endl;
    cout << "Nombre: Angui Fierro"<<endl;
    cout << "Materia: Programacion"<<endl;
    cout << "Curso: GR3" <<endl;
    
}
void calcularDescuento() {
    float precio;
    cout << "--- Calculo de descuento ---"<<endl;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    if (precio > 1000) {
        float descuento = precio * 0.10;
        float final = precio - descuento; 
        cout << "Descuento:" << descuento << endl;
        cout << "Total a pagar:" << final << endl;
    } else {
        cout << "No aplica descuento.Su total a pagar es de:" << precio << endl;
    }
}
int main() {
    int tam = 8; 
    float precios[8]; 
    ingresarDatos(precios, tam);
    float mayor, menor;
    encontrarMayorMenor(precios, tam, mayor, menor);
    cout << " El mayor precio es:" << mayor << endl;
    cout << "El menor precio es:" << menor << endl;
    mostrarDatosProgramador();
    calcularDescuento();

    return 0;
}
