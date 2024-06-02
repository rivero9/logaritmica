#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Ingrese un numero para obtener su tabla de multiplicar: ";
    cin >> num;
    
    cout << endl << "### TABLA DEL " << num << " ###" << endl;
    
    cout << num << " x 0 = " << 0 << endl;    
    cout << num << " x 1 = " << num << endl;    
    cout << num << " x 2 = " << num*2 << endl;    
    cout << num << " x 3 = " << num*3 << endl;    
    cout << num << " x 4 = " << num*4 << endl;    
    cout << num << " x 5 = " << num*5 << endl;    
    cout << num << " x 6 = " << num*6 << endl;    
    cout << num << " x 7 = " << num*7 << endl;    
    cout << num << " x 8 = " << num*8 << endl;    
    cout << num << " x 9 = " << num*9 << endl;    
    cout << num << " x 10 = " << num*10 << endl;
    
    return 0;    
}