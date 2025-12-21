#include <iostream>
#include <vector>
using namespace std;

struct PagoMetro {
    string nombreUsuario;
    string tipoTarjeta; 
    float montoUSD;
};

void registrarPago(vector<PagoMetro> &pagos) {
    PagoMetro p;
    cout << "Nombre del usuario: ";
    cin.ignore();
    getline(cin, p.nombreUsuario);
    cout << "Tipo de tarjeta (Normal/TerceraEdad/Discapacitado): ";
    getline(cin, p.tipoTarjeta);
    cout << "Monto en USD: ";
    cin >> p.montoUSD;

    pagos.push_back(p);
}

float aplicarDescuento(PagoMetro p) {
    if (p.tipoTarjeta == "TerceraEdad" || p.tipoTarjeta == "Discapacitado") {
        return p.montoUSD * 0.5;
    }
    return p.montoUSD;
}

float convertirAEuros(float montoUSD) {
    return montoUSD * 0.93;
}

void contarTiposTarjeta(vector<PagoMetro> pagos) {
    int normal = 0, tercera = 0, discap = 0;

    for (int i = 0; i < pagos.size(); i++) {
        if (pagos[i].tipoTarjeta == "Normal") normal++;
        else if (pagos[i].tipoTarjeta == "TerceraEdad") tercera++;
        else if (pagos[i].tipoTarjeta == "Discapacitado") discap++;
    }

    cout << "\nTarjeta Normal: " << normal << endl;
    cout << "Tercera Edad: " << tercera << endl;
    cout << "Discapacitado: " << discap << endl;
}

void reemplazarPago(vector<PagoMetro> &pagos, string nombreUsuario) {
    for (int i = 0; i < pagos.size(); i++) {
        if (pagos[i].nombreUsuario == nombreUsuario) {
            cout << "Nuevo tipo de tarjeta: ";
            cin.ignore();
            getline(cin, pagos[i].tipoTarjeta);
            cout << "Nuevo monto USD: ";
            cin >> pagos[i].montoUSD;
            cout << "Pago reemplazado\n";
            return;
        }
    }
    cout << "Usuario no encontrado\n";
}

void mostrarPagos(vector<PagoMetro> pagos) {
    for (int i = 0; i < pagos.size(); i++) {
        float montoFinal = aplicarDescuento(pagos[i]);
        cout << "\nUsuario: " << pagos[i].nombreUsuario << endl;
        cout << "Tarjeta: " << pagos[i].tipoTarjeta << endl;
        cout << "Monto USD: " << montoFinal << endl;
        cout << "Monto EUR: " << convertirAEuros(montoFinal) << endl;
    }
}

int main() {
    vector<PagoMetro> pagos;
    int op = 0;

    while (op != 5) {
        cout << "\n1.Registrar pago\n2.Mostrar pagos\n3.Contar tarjetas\n4.Reemplazar pago\n5.Salir\nOpcion: ";
        cin >> op;

        if (op == 1) registrarPago(pagos);
        else if (op == 2) mostrarPagos(pagos);
        else if (op == 3) contarTiposTarjeta(pagos);
        else if (op == 4) {
            string nombre;
            cout << "Nombre del usuario: ";
            cin.ignore();
            getline(cin, nombre);
            reemplazarPago(pagos, nombre);
        }
    }

    return 0;
}
