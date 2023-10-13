#include <iostream>
#include <vector>
#include <limits>

double calcular_rango(const std::vector<double>& datos) {
    if (datos.empty()) {
        return std::numeric_limits<double>::quiet_NaN();  // No hay datos para calcular el rango.
    }

    double max_valor = datos[0];
    double min_valor = datos[0];

    for (double valor : datos) {
        if (valor > max_valor) {
            max_valor = valor;
        }
        if (valor < min_valor) {
            min_valor = valor;
        }
    }

    double rango = max_valor - min_valor;
    return rango;
}

int main() {
    int num_datos;
    std::cout << "Ingrese la cantidad de datos: ";
    std::cin >> num_datos;

    std::vector<double> datos;

    for (int i = 0; i < num_datos; i++) {
        double dato;
        std::cout << "Ingrese el dato " << i + 1 << ": ";
        std::cin >> dato;
        datos.push_back(dato);
    }

    double rango_calculado = calcular_rango(datos);

    if (!std::isnan(rango_calculado)) {
        std::cout << "El rango de los datos ingresados es: " << rango_calculado << std::endl;
    } else {
        std::cout << "No hay datos para calcular el rango, la lista está vacía." << std::endl;
    }

    return 0;
}
