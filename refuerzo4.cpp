#include <iostream>
using namespace std;

int main() {
    int opcion;
    float precioBase;
    float iva = 0.15;
    float ice = 0.15;
    float instalacion = 120;
    float precioIVA, precioICE, descuentoEdad, precioMensual;
    int edad, metodo;
    string nombreServicio;
    cout << "1.Telefonia Fija"<<endl;
    cout << "2.TV Satelital"<<endl;
    cout << "3.Internet Hogar"<<endl;
    cout << "Seleccione un servicio: ";
    cin >> opcion;
    if (opcion == 1) {
        precioBase = 7.99;
        nombreServicio = "Telefonia Fija";
    }
    else if (opcion == 2) {
        precioBase = 28.50;
        nombreServicio = "TV Satelital";
    }
    else if (opcion == 3) {
        precioBase = 18.00;
        nombreServicio = "Internet Hogar";
    }
    else {
        cout << "Opcion incorrecta";
        return 0;
    }

    precioIVA = precioBase * iva;

    precioICE = 0;
    if (opcion == 2) {
        precioICE = precioBase * ice;
    }

    cout << "Ingrese la edad del cliente: ";
    cin >> edad;

    descuentoEdad = 0;
    if (edad > 65) {
        descuentoEdad = precioBase * 0.50;
    }
    precioMensual = (precioBase - descuentoEdad) + precioIVA + precioICE;
    cout << "Metodo de pago para instalacion:\n";
    cout << "1. Tarjeta"<<endl;
    cout << "2. Efectivo"<<endl;
    cout << "3. Otro"<<endl;
    cin >> metodo;
    if (metodo == 1) {
        instalacion = instalacion - (instalacion * 0.50);
    }
    else if (metodo == 2) {
        instalacion = instalacion - (instalacion * 0.10);
    }

    cout << "\n--- RESUMEN ---\n";
    cout << "Servicio: " << nombreServicio << endl;
    cout << "Precio: " << precioBase << endl;
    cout << "IVA: " << precioIVA << endl;

    if (opcion == 2)
        cout << "ICE: " << precioICE << endl;
    else
        cout << "ICE: No aplica"<<endl;

    if (edad > 65)
        cout << "Descuento tercera edad:" << descuentoEdad << endl;
    else
        cout << "Descuento tercera edad: No aplica"<<endl;

    cout << "Precio mensual total: $" << precioMensual << endl;
    cout << "Costo instalacion final: $" << instalacion << endl;

    return 0;
}
