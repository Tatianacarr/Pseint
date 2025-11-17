#include <iostream>
using namespace std;
//Funciones de descuento de servicio de internet 
// Angui Fierro
float calcularDescuento(float precioBase, float porcentaje) {
    float descuento = precioBase * porcentaje;
    return descuento;
}
float calcularTotalPagar(float precioBase, float porcentaje1, float porcentaje2) {
    float d1 = calcularDescuento(precioBase, porcentaje1);
    float d2 = calcularDescuento(precioBase, porcentaje2);

    float total = precioBase - (d1 + d2);
    return total;
}

int main() {
    float precioBase, porcentaje, porcentaje2;
    cout << "Ingrese el precio mensual del plan: ";
    cin >> precioBase;
    cout << "Ingrese el primer descuento: ";
    cin >> porcentaje;
    cout << "Ingrese el segundo descuento: ";
    cin >> porcentaje2;
    float totalPagar = calcularTotalPagar(precioBase, porcentaje, porcentaje2);
    cout << "El total a pagar despues de aplicar ambos descuentos es:" << totalPagar << endl;

    return 0;
}
