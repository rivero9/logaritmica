#include <iostream>
using namespace std;

int main() {
    int sueldo;
    int descuento;
    
    cout << "Cuál es su sueldo en dólares: ";
    cin >> sueldo;
    
    if (sueldo <= 1000) descuento = 5;
    else if (sueldo > 1000 && sueldo <= 2000) descuento = 10;
    else if (sueldo > 2000) descuento = 3;
    
    cout << "Se descontara " << descuento;
    cout << "% de sueldo, por lo que tendrá un sueldo neto de ";
    cout << sueldo-((sueldo*descuento)/100) << " dólares";
}