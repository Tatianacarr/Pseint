#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Motos{
	char placa;
	string propietario;
	float puntos;
	
};
	vector<Motos>carreras;
void crear(vector<Motos>&carreras){
	Motos m;
	int n;
	
	cout<<"--COMPETIDORES----"<<endl;
	cout<<"Ingrese el numero de competidores deseados:";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
	
		cout<<"Ingrese la placa:";
		cin>>m.placa;
		cout<<"Ingrese el nombre del propietario:";
		getline(cin,m.propietario);
		cout<<"Ingrese los puntos:";
		cin>>m.puntos;
		cin.ignore();
		
		carreras.push_back(m);
		
	}
}
void mostrar(vector<Motos>&carreras){
	cout<<"======LISTA DE COMPETIDORES======="<<endl;
	for(int i=0;i<carreras.size();i++){
		cout<<"Placa: "<<carreras[i].placa<<"| Nombre:"<<carreras[i].propietario<<"| Puntos:"<<carreras[i].puntos<<endl;
		
	}
}
float suma(vector<Motos>&carreras){
	float total=0;
	for(int i=0;i<carreras.size();i++){
		total+= carreras[i].puntos;
	}
	return total;
	
}
void maximo_minimo(vector<Motos>&carreras){
	cout<<"*****MAXIMOS Y MINIMOS******"<<endl;
	float maximo=0; float minimo=0;
	for(int i=0;i<carreras.size();i++){
		if(carreras[i].puntos > maximo){
			cout<<"El maximo es "<< maximo;
			
		}else if (carreras[i].puntos < minimo){
			cout<<"El minimo es "<< minimo;
		}
		
	}
}
void actualizar(vector<Motos>&carreras){
	int pos;
	cout<<"Ingrese la posicion a eliminar: ";
	cin>>pos;
	cout<<"Ingrese la nueva placa:";
	cin>>carreras[pos].placa;
	cout<<"Ingrese el nuevo nombre:";
	getline(cin, carreras[pos].propietario);
	cout<<"Ingrese los nuevos puntos:";
	cin>>carreras[pos].puntos;
	cin.ignore();
	cout<<"=====LISTA ACTUALIZADA====="<<endl;
	mostrar(carreras);
	}
int main(){
	Motos m;
	do{
		cout<<"MENÚ"<<endl;
		cout<<"1. Crear "<<endl;
		cout<<"2. Mostrar "<<endl;
		cout<<"3. Suma de puntos "<<endl;
		cout<<"4. Maximos y minimos "<<endl;
		cout<<"5. Salir "<<endl;
		int opcion;
		cout<<"Ingrese la opcion:";
		cin>>opcion;
		switch (opcion) {
			case 1:
				crear(carreras);
				break;
			case 2:
				mostrar(carreras);
				break;
			case 3:
				suma(carreras);
			
			case 4:
				maximo_minimo(carreras);
			default:
				cout<<"Saliendo del sistema"<<endl;
				
				
				break;
		}
		
	}while(!5);
	cout<<"Opcion invalida";
	
	
	
}
