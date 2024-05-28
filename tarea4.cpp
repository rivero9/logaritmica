#include <iostream>
#include <iomanip>

// funcion para calcular la velocidad en m/s
int v(float time) {
    if (time > 0) {
        float speed = 1500/(time*60);

        std::cout << std::fixed << std::setprecision(2);   // con esta linea mostramos la velocidad solo con 2 decimales

        std::cout << "Tardo " << time << " minutos en correr los 1500 metros con una velocidad de " << speed << " m/s" << std::endl << std::endl;
    }

    return 0;
}

int main() {
    std::cout << std::endl << "########### CARRERA DE 1500 METROS ###########" << std::endl << std::endl;

    v(3.53);
    v(3.40);
    v(3.46);
    v(3.52);
    v(4.00);
    v(0.00);

    return 0;
}