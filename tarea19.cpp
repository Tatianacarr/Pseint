#include <iostream>
using namespace std;
//Angui Fierro
//Crea un programa en C++ que simule una tarjeta de transporte del Metro/Bus de Quito. 
void recargar(double &saldo, double monto) {
    saldo = saldo + monto;
}
bool pagar(double &saldo, double tarifa) {
    if (saldo >= tarifa) {
        saldo = saldo - tarifa;
        return true;  // si el saldo es mayor que la tarifa se realiza la operacion y si sogue el programa
    } else {
        return false; // no cumple con la condicion que sea mayor retorna false y se detiene
    }
}
void mostrarEstado(double saldo, int pasadas) {
    cout << "\nPasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << saldo << endl;
}

int main() {
    double saldo = 0;
    double monto, tarifa = 0.45;
    int pasadas = 0;
    cout << "===== TARJETA METRO QUITO =====\n";
    cout << "Saldo actual: $" << saldo << endl;
    cout << "Ingrese monto a recargar: ";
    cin >> monto;
    recargar(saldo, monto);
    cout << "Recarga exitosa. Saldo actual: $" << saldo << endl;
    cout << "\nPagando pasaje de $0.45 ...\n";
    if (pagar(saldo, tarifa)) {
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
        pasadas++;
    } else {
        cout << "Saldo insuficiente.\n";
    }

    cout << "\nPagando pasaje de $0.45 ...\n";
    if (pagar(saldo, tarifa)) {
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
        pasadas++;
    } else {
        cout << "Saldo insuficiente.\n";
    }

    mostrarEstado(saldo, pasadas);

    return 0;
}
