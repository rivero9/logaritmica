#include <iostream>
using namespace std;

int verificarNumero(int nump) {
  for (int x = 2; x < nump / 2; x++) {
    if (nump % x == 0) return 0;
  }
  
  return 1;
}

int main()
{
    int num;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    
   cout << verificarNumero(num);
       
    return 0;
}