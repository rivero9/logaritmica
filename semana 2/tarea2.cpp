#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << endl;
    
    cout << num1 << " + " << num2 << " + " << num3 << " : " << num1+num2+num3 << endl;
    
    cout << num1 << " x " << num2 << " x " << num3 << " : " << num1*num2*num3 << endl;
    
    return 0;    
}