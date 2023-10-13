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
    std::vector<double> datos = {5.96, 6.74, 7.43, 4.99, 7.20, 0.56, 2.80};
    double rango_calculado = calcular_rango(datos);

    if (!std::isnan(rango_calculado)) {
        std::cout << "El rango de los datos es: " << rango_calculado << std::endl;
    } else {
        std::cout << "No hay datos para calcular el rango, la lista está vacía." << std::endl;
    }

    return 0;
}
