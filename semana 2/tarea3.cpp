#include<iostream>
using namespace std;

int main()
{
    int base, altura;

    cout << "Cuál es la base del rectangulo: ";
    cin >> base;
    
    cout << "Cuál es la altura del rectangulo: ";
    cin >> altura;
    
    cout << "El área del rectangulo es: " << (base*altura)**2;
       
    return 0;
}