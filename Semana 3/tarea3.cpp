#include <iostream>
using namespace std;

int main() {
    int bombillo = 120;
    float kv = (bombillo*3)*0.001;
    
    cout << "Un bombillo contiene 120V, por lo que 3 bombillos suman un total de " <<
    bombillo*3 << "V, es decir " << kv << " kilovoltios";
    
    return 0;
}    