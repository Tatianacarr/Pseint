#include <iostream>
#include <string> //lo usamos para el getline para los textos 
using namespace std;
//Angui Fierro
//Desarrolle un programa en C++ que lea: nombre del producto, precio unitario y cantidad
// Cargar datos
void cargar(string &producto, double &precio, int &cantidad) {
    cout << "Producto: ";
    getline(cin, producto);

    cout << "Precio unitario: ";
    cin >> precio;

    cout << "Cantidad: ";
    cin >> cantidad;
}
double subtotalCalc(double precio, int cantidad) {
    return precio * cantidad;
}
double descuentoCalc(double subtotal, int cantidad) {
    double d = 0;
    if (cantidad == 2)
        d += subtotal * 0.10;
    else if (cantidad >= 3)
        d += subtotal * 0.15;

    if (subtotal > 200)
        d += subtotal * 0.05;

    return d;
}
void calcularTotal(double subtotal, double descuento, double &total) {
    total = subtotal - descuento;
}
void mostrar(string producto, double subtotal, double descuento, double total) {
    cout << "\n--- FACTURA ---\n";
    cout << "Producto: " << producto << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total: $" << total << endl;
}

int main() {
    string producto;
    cout<<"Ingrese el nombre del producto:";
    cin>>producto;
    double precio, subtotal, descuento, total;
    int cantidad;

    cin.ignore();  
    cargar(producto, precio, cantidad);

    subtotal = subtotalCalc(precio, cantidad);
    descuento = descuentoCalc(subtotal, cantidad);
    calcularTotal(subtotal, descuento, total);

    mostrar(producto, subtotal, descuento, total);

    return 0;
}
