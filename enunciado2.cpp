#include <iostream>
using namespace std;
//Enunciado 2
//Angui Fierro
struct Cliente {
    string nombre;
    string cedula;
};

struct Cuenta {
    string numeroCuenta;
    float saldoUSD;
    Cliente cliente;
};

void ingresarCuenta(Cuenta &c) {
    cout << "Nombre del cliente: ";
    cin.ignore();
    getline(cin, c.cliente.nombre);

    cout << "Cedula: ";
    getline(cin, c.cliente.cedula);

    cout << "Numero de cuenta: ";
    getline(cin, c.numeroCuenta);

    cout << "Saldo en USD: ";
    cin >> c.saldoUSD;
}

float convertirAEuros(float saldoUSD) {
    return saldoUSD * 0.93;
}

void mostrarCuenta(Cuenta c) {
    cout << "\nCliente: " << c.cliente.nombre << endl;
    cout << "Cedula: " << c.cliente.cedula << endl;
    cout << "Cuenta: " << c.numeroCuenta << endl;
    cout << "Saldo USD: " << c.saldoUSD << endl;
    cout << "Saldo EUR: " << convertirAEuros(c.saldoUSD) << endl;
}

int main() {
    Cuenta cuentas[3];
    for (int i = 0; i < 3; i++) {
        cout << "\n--- Cliente " << i + 1 << " ---\n";
        ingresarCuenta(cuentas[i]);
    }
    for (int i = 0; i < 3; i++) {
        mostrarCuenta(cuentas[i]);
    }

    return 0;
}
