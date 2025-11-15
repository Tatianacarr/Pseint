#include <iostream>
using namespace std;
//Angui Fierro
//Una tienda aplica descuentos a un producto antes de venderlo al cliente. 
//Al precio base se le aplican dos tipos de descuentos

#include <iostream>
using namespace std;

double calcularDescuento(double precio, double porcentaje) { // Calcula el descuento
    return precio * porcentaje / 100;
}

double calcularPrecioFinal(double precioBase, double porcPromo, double porcCliente) {   //Calcula el precio final
    double d1 = calcularDescuento(precioBase, porcPromo);
    double d2 = calcularDescuento(precioBase, porcCliente);
    return precioBase - d1 - d2;
}

void mostrar(double arr[], int n) {  //Muestra un arreglo con los datos de la compra 
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
    cout << endl;
}

void burbuja(double arr[], int n) { // Ordenamiento en burbuja recorre cada elemento del arreglo
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                double temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {

    double precio, promo, cliente;

    cout << "Ingrese el precio base: ";
    cin >> precio;

    cout << "Ingrese el descuento promocion (%): ";
    cin >> promo;

    cout << "Ingrese el descuento cliente frecuente (%): ";
    cin >> cliente;

    double dPromo = calcularDescuento(precio, promo);
    double dCliente = calcularDescuento(precio, cliente);
    double final = calcularPrecioFinal(precio, promo, cliente);

    cout << "Descuento promo: " <<dPromo<<endl;
    cout << "Descuento cliente: " <<dCliente<<endl;
    cout << "Precio final: " << final << endl;

    double datos[4] = { precio, dPromo, dCliente, final };

    cout << "Arreglo original: "<<endl;
    mostrar(datos, 4);
    burbuja(datos, 4);
    cout << "Arreglo ordenado: "<<endl;
    mostrar(datos, 4);

    return 0;
}

