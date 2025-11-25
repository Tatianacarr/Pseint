#include <iostream>
using namespace std;
int main(){
	string matriz[2][2];
	cout<<"Llene la matriz "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		cout<<"Ingrese los nombres en la posicion [" << i << "][" << j << "]:";
		cin>>matriz[i][j];
	}
	cout << "\nMatriz ingresada:" << endl;
		    for (int i = 0; i < 2; i++) {
		        for (int j = 0; j < 2; j++) {
		            cout << matriz[i][j] << " ";
		        }
		        cout << endl;
		    }
			
			
			
}
}
