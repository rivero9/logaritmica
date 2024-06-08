#include <iostream>
using namespace std;

int main() {
    double num;
    
    cout << "Ingresa un numero: ";
    cin >> num;
    cout << "El número " << num;
    
    if (num > 0) cout << " es positivo";
    else if (num < 0) cout << " es negativo";
    else cout << ", es neutral";
    
    return 0;
}