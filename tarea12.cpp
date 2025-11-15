#include <iostream>
using namespace std;
//Angui Fierro
//Cree un programa que solicite al usuario ingresar las calificaciones de 4 estudiantes, 
//las almacene en un arreglo y utilice una función void para mostrar todas las notas registradas. 
void mostrarNotas(double notas[], int n) { // mostrar el arreglo con un for que recorra los elementos 
    cout << "Notas registradas: ";
    for (int i = 0; i < n; i++) {
        cout << notas[i] << "  ";
    }
    cout << endl;
}

int main() {
    double notas[4];
    cout << "Ingrese las calificaciones de 4 estudiantes:"<<endl;
    for (int i = 0; i < 4; i++) {
        cin >> notas[i];
    }
    mostrarNotas(notas, 4);
    return 0;
    
}
