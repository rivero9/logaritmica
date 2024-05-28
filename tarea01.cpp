#include <iostream>

int main() {
    char op;
    float num1;
    float num2;

    std::cout << "Que operacion deseas hacer (+ - x /) ";
    std::cin >> op;
    
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    switch (op){
        case '+': std::cout << "El resultado es " << num1+num2;
        break;
        case '-': std::cout << "El resultado es " << num1-num2;
        break;
        case 'x': std::cout << "El resultado es " << num1*num2;
        break;
        case '/': std::cout << "El resultado es " << num1/num2;
        break;
        default: std::cout << "Error, porfavor intentalo de nuevo";
        break;
    }
}