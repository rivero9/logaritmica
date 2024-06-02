#include <iostream>
using namespace std;

int main() {
    int horas, pago;
    
    cout << "Cuantas horas trabajas? ";
    cin >> horas;
    
    cout << "Cuánto dinero ganas por hora? ";
    cin >> pago;
    
    cout << "Tu salario diario es de " << horas*pago;
    
    return 0;
}
