#include <iostream>
using namespace std;
//un menú de opciones manejado con la instrucción switch. 
//El programa debe trabajar con un arreglo unidimensional de 5 enteros y permitir al usuario realizar varias operaciones sobre él.
//Angui Fierro
int main() {
    int numeros[5];
    bool lleno = false;
    int opcion = 0;

    while (opcion != 4) {
        cout << "===== MENU DE OPCIONES ====="<<endl;
        cout << "1. Llenar el arreglo"<<endl;
        cout << "2. Sumar elementos del arreglo"<<endl;
        cout << "3. Modificar una posicion"<<endl;
        cout << "4. Salir"<<endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            cout << "--- Llenar el arreglo ---"<<endl;
            for (int i = 0; i < 5; i++) {
                cout << "Ingrese un numero: ";
                cin >> numeros[i];
            }
            lleno = true;
            cout << "El arreglo se lleno."<<endl;
            break;
        }

        case 2: {
            if (!lleno) {
                cout << "ERROR: El arreglo no esta inicializado"<<endl;
            } else {
                int suma = 0;
                for (int i = 0; i < 5; i++) {
                    suma += numeros[i];
                }
                cout << "La suma de los elementos es: " << suma << endl;
            }
            break;
        }

        case 3: {
            if (!lleno) {
                cout << " Primero debe llenar el arreglo."<<endl;
            } else {
                int pos, nuevo;
                cout << "Ingrese la posicion a modificar: ";
                cin >> pos;

                if (pos >= 0 && pos < 5) {
                    cout << "Ingrese el nuevo valor para la posicion " << pos << ": ";
                    cin >> nuevo;
                    numeros[pos] = nuevo; 
                    cout << "Se modifico correctamente."<<endl;
                } else {
                    cout << "Posicion fuera del rango"<<endl;
                }
            }
            break;
        }

        case 4:
            cout << "Saliendo del programa"<<endl;
            break;

        default:
            cout << "Opcion no valida. Intente nuevamente."<<endl;
        }
    }

    return 0;
}
