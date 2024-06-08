#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radio;
    float pi = 3.14159;
    
    cout << "Indica el radio del circulo: ";
    cin >> radio;
    
    float area = pi*pow(radio, 2);
    
    area > 5000 
        ? cout << "DATOS ERRONEOS"
        : cout << "El area del círculo es " << area << "^2";
    
    return 0;
}