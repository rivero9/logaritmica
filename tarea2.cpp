#include <iostream>

int main() {
    char a = 'A';
    char b = 'B';

    std::cout << a+b;
    
    // Lo que ocurre aqui es que se suman los valores correspondientes a su letra asignado 
    // en la tabla ASCII. En este caso A se identifica con el numero 65  y B con el 66,
    // por lo que la suma de estos dos caracteres es igual a 131

    return 0;
}