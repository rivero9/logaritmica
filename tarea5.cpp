#include <iostream>

int main() {
    int horas;
    int pago;

    std::cout << "Cuantos dolares gana por hora? ";
    std::cin >> pago;

    std::cout << "Cuantas horas trabajas al dia? ";
    std::cin >> horas;

    // multiplicamos los dolares por hora, por las horas que trabaja la persona 
    // y luego los multiplicamos por los 5 dias de la semana, para obtener el salario semanal
    std::cout << "Su salario semanal es de " << (pago*horas)*5 << " dolares";

    return 0;
}