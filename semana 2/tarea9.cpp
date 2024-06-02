#include <iostream>
using namespace std;

int sumarDigitos(int num) {
    int suma = 0;
    
    while (num != 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int main() {
    int num;
    cout << "Ingrese un numero para sumar sus digitos: ";
    cin >> num;
    
    cout << "La suma de los dígitos es: " << sumarDigitos(num);
    
    return 0;
}
