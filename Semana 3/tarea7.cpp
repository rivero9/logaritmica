#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    
    cout << "Ingrese la primer nota: ";
    cin >> n1;
    
    cout << "Ingrese la segunda nota: ";
    cin >> n2;
    
    cout << "Ingrese la tercera nota: ";
    cin >> n3;
    
    float promedio = (n1+n2+n3)/3;
    string nota = promedio > 7 ? "APROBADO" : "MEJORE LA NOTA";
    cout << nota;
    
    return 0;
}