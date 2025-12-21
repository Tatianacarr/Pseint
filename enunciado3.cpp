#include <iostream>
using namespace std;
//Enunciado 3
//Angui Fierro
struct Vehiculo {
    string placa;
    string propietario;
    int anio;
    float valorComercial;
};

void ingresarVehiculos(Vehiculo v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nVehiculo " << i + 1 << endl;
        cout << "Placa: ";
        cin >> v[i].placa;
        cout << "Propietario: ";
        cin.ignore();
        getline(cin, v[i].propietario);
        cout << "Año: ";
        cin >> v[i].anio;
        cout << "Valor comercial: ";
        cin >> v[i].valorComercial;
    }
}

float calcularMatricula(float valorComercial) {
    return valorComercial * 0.015;
}

float obtenerMayorValor(Vehiculo v[], int n) {
    float mayor = v[0].valorComercial;
    for (int i = 1; i < n; i++) {
        if (v[i].valorComercial > mayor)
            mayor = v[i].valorComercial;
    }
    return mayor;
}
float obtenerMenorValor(Vehiculo v[], int n) {
    float menor = v[0].valorComercial;
    for (int i = 1; i < n; i++) {
        if (v[i].valorComercial < menor)
            menor = v[i].valorComercial;
    }
    return menor;
}

float promedioMatricula(Vehiculo v[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += calcularMatricula(v[i].valorComercial);
    }
    return suma / n;
}

void mostrarVehiculos(Vehiculo v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nVehiculo " << i + 1 << endl;
        cout << "Placa: " << v[i].placa << endl;
        cout << "Propietario: " << v[i].propietario << endl;
        cout << "Año: " << v[i].anio << endl;
        cout << "Valor comercial: " << v[i].valorComercial << endl;
        cout << "Matricula: " 
             << calcularMatricula(v[i].valorComercial) << endl;
    }
}

int main() {
    const int N = 5;
    Vehiculo vehiculos[N];

    ingresarVehiculos(vehiculos, N);

    mostrarVehiculos(vehiculos, N);

    cout << "\nMayor valor comercial: " 
         << obtenerMayorValor(vehiculos, N) << endl;

    cout << "Menor valor comercial: " 
         << obtenerMenorValor(vehiculos, N) << endl;

    cout << "Promedio valor matricula: " 
         << promedioMatricula(vehiculos, N) << endl;

    return 0;
}
