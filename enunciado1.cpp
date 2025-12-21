#include <iostream>
#include <vector>
using namespace std;
//Angui Fierro
//Ejercicio 1 

struct Equipo {
    string nombre;
    float edadPromedio;
    int numJugadores;

    void mostrar() {
        cout << nombre << " | "
             << edadPromedio << " | "
             << numJugadores << endl;
    }
};
void agregar(vector<Equipo> &v) {
    Equipo e;
    cout << "Nombre: ";
    cin.ignore();
    getline(cin, e.nombre);
    cout << "Edad promedio: ";
    cin >> e.edadPromedio;
    cout << "Jugadores: ";
    cin >> e.numJugadores;
    v.push_back(e);
}

void mostrar(vector<Equipo> v) {
    for (int i = 0; i < v.size(); i++) {
        v[i].mostrar();
    }
}
int buscar(vector<Equipo> v, string nombre) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i].nombre == nombre)
            return i;
    }
    return -1;
}
void actualizar(vector<Equipo> &v) {
    string nombre;
    cout << "Nombre a actualizar: ";
    cin.ignore();
    getline(cin, nombre);

    int pos = buscar(v, nombre);
    if (pos != -1) {
        cout << "Nueva edad: ";
        cin >> v[pos].edadPromedio;
        cout << "Nuevos jugadores: ";
        cin >> v[pos].numJugadores;
    } else {
        cout << "No existe\n";
    }
}
void eliminar(vector<Equipo> &v) {
    string nombre;
    cout << "Nombre a eliminar: ";
    cin.ignore();
    getline(cin, nombre);

    int pos = buscar(v, nombre);
    if (pos != -1)
        v.erase(v.begin() + pos);
    else
        cout << "No existe\n";
}
void menorEdad(vector<Equipo> v) {
    if (v.size() == 0) return;

    int m = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i].edadPromedio < v[m].edadPromedio)
            m = i;
    }
    cout << "Equipo con menor edad:\n";
    v[m].mostrar();
}

int main() {
    vector<Equipo> equipos;
    int op = 0;
    cout<<"Menu de opciones"<<endl;
    

    while (op != 7) {
        cout << "\n1.Agregar\n2.Mostrar\n3.Actualizar\n4.Buscar\n5.Eliminar\n6.Menor edad\n7.Salir\nOpcion: ";
        cin >> op;

        if (op == 1) agregar(equipos);
        else if (op == 2) mostrar(equipos);
        else if (op == 3) actualizar(equipos);
        else if (op == 4) {
            string nombre;
            cout << "Nombre a buscar: ";
            cin.ignore();
            getline(cin, nombre);
            int pos = buscar(equipos, nombre);
            if (pos != -1) equipos[pos].mostrar();
            else cout << "No existe\n";
        }
        else if (op == 5) eliminar(equipos);
        else if (op == 6) menorEdad(equipos);
    }

    return 0;
}
