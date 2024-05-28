#include <iostream>

int main() {
    int x = 0;

    while (x < 400)
    {
        // Este es un bucle donde, si x es menor a 400, se le suman 4 a x y se muestra 
        // en pantalla. Esto nos mostrara numeros como 4, 8, 12, 16... 400


        x += 4;
        std::cout << x << std::endl;
    }
    
    return 0;
}