#include <iostream>

int main() {
    int lado;
    std::cout << "Ingrese el lado del cuadrado: ";
    std::cin >> lado;

    if (lado < 2) {
        std::cout << "El lado del cuadrado debe ser igual o mayor a 2." << std::endl;
    } else {
        for (int i = 0; i < lado; i++) {
            if (i == 0 || i == lado - 1) {
                for (int j = 0; j < lado; j++) {
                    std::cout << "* ";
                }
                std::cout << std::endl;
            } else {
                std::cout << "* ";
                for (int j = 0; j < lado - 2; j++) {
                    std::cout << "  ";
                }
                std::cout << "* " << std::endl;
            }
        }
    }

    return 0;
}
