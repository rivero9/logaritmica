#include <iostream>
using namespace std;

int main() {
    int V[5];
    
    for (int i = 0; i < 5; i++){
        cout << "Ingrese la cantidad de Voltaje: ";
        cin >> V[i];
    }
    
    int voltaje = V[0] + V[1] + V[2] + V[3] + V[4];
    voltaje /= 5;
    
    (voltaje <= 220) ? cout << "Voltaje correcto" : cout << "ALTO VOLTAJE";
    
    return 0;
}