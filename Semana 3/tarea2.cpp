#include <iostream>
using namespace std;

int main() {
    int monto;
    int descuento;
    
    cout << "Ingrese el monto: ";
    cin >> monto;
    descuento = monto >= 10000 ? 20 : 10;
    
    cout << "Se descontara el " << descuento;
    cout << "% de los " << monto << " ingresados, lo que da un total de ";
    cout << monto-((monto*descuento)/100);
}