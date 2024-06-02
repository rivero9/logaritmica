#include<iostream>
using namespace std;

int main()
{
    int cm;
    
    cout << "### CONVERTIR CENTIMETROS A PULGADAS ###" << endl << endl;
    cout << "Unidad en centimetros a convertir: ";
    cin >> cm;
    
    cout << cm << "cm = " << cm*2.54 << '"';    
       
    return 0;
}