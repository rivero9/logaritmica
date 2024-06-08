#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    num %= 2;
    
    if (num == 0) cout << "El número es par";
    else cout << "El número es impar";
    
    cout << endl << endl;
    main();
    
    return 0;
}