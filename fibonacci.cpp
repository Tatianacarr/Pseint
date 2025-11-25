#include <iostream>
using namespace std; 

int fibonacci1(int n) {
    if (n <= 1) return n; 
    return fibonacci1(n - 1) + fibonacci1(n - 2);
}

void imprimirFibonacci(int n, int i = 0) {
    if (i == n){
		return; 
	}
    cout << fibonacci1(i) << " ";
    imprimirFibonacci(n, i + 1); 
}

int main() {
    int n=5;
    cout << "Serie Fibonacci: ";
    imprimirFibonacci(n);
    cout << endl;

    return 0;
}

