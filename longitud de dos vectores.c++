#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Función para generar un vector de longitud dada con valores aleatorios entre 1 y 100.
std::vector<int> generar_vector(int longitud) {
    std::vector<int> vector;
    for (int i = 0; i < longitud; i++) {
        vector.push_back(std::rand() % 100 + 1);
    }
    return vector;
}

// Función para comparar dos vectores y determinar los escenarios.
std::string comparar_vectores(const std::vector<int>& vector_a, const std::vector<int>& vector_b) {
    int suma_a = 0;
    int suma_b = 0;

    for (int valor : vector_a) {
        suma_a += valor;
    }

    for (int valor : vector_b) {
        suma_b += valor;
    }

    if (suma_a == suma_b) {
        return "Son iguales";
    } else if (suma_a < suma_b) {
        return "El vector A es menor a B";
    } else {
        return "El vector B es menor a A";
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr));

    int longitud;
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> longitud;

    std::vector<int> vector_a = generar_vector(longitud);
    std::vector<int> vector_b = generar_vector(longitud);

    std::cout << "Vector A: ";
    for (int valor : vector_a) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector B: ";
    for (int valor : vector_b) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::string resultado = comparar_vectores(vector_a, vector_b);
    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}
