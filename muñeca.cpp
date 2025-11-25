#include <iostream>
using namespace std;

void abrirmuñeca(int numero){
	if(numero ==1){
		cout<<"Abra la muñeca";
		return;
	}
	cout<<"Abriendo la muñeca"<<numero<<endl;
	abrirmuñeca(numero - 1);
	
	
	
}

int main(){
	abrirmuñeca(8);
	return 0;
	
}
