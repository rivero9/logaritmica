#include <iostream>

int main() {
    int x = 0;
    int y = -1;
    x += y++;

    // El resultado es x = -1;
    std::cout << x;

    return 0;
}