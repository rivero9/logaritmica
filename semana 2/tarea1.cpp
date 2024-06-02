#include <iostream>
using namespace std;


int main() {
    double num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << endl;
    cout << num1 << " + " << num2 << " : " << num1+num2 << endl;

    cout << num1 << " - " << num2 << " : " << num1-num2 << endl;

    cout << num1 << " x " << num2 << " : " << num1*num2 << endl;

    cout << num1 << " / " << num2 << " : " << num1/num2 << endl;

    cout << num1 << " % " << num2 << " : " << (int)num1 % (int)num2;

    return 0;
}