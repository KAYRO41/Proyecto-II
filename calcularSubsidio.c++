#include <iostream>
#include <vector>

double calcularSubsidio(int num_hijos, std::vector<int> edades_hijos, bool es_viuda) {
    double monto_base = 0.0;

    if (num_hijos <= 2) {
        monto_base = 70.00;
    } else if (num_hijos >= 3 && num_hijos <= 5) {
        monto_base = 90.00;
    } else {
        monto_base = 120.00;
    }

    double monto_adicional_escolar = 0.0;
    for (int edad : edades_hijos) {
        if (edad >= 6 && edad <= 18) {
            monto_adicional_escolar += 10.00;
        }
    }

    double monto_adicional_viuda = es_viuda ? 20.00 : 0.0;

    double monto_total = monto_base + monto_adicional_escolar + monto_adicional_viuda;
    return monto_total;
}

int main() {
    int num_hijos = 4;
    std::vector<int> edades_hijos = {7, 12, 4, 16};
    bool es_viuda = false;

    double monto_total = calcularSubsidio(num_hijos, edades_hijos, es_viuda);
    std::cout << "El monto mensual que recibirá la familia es: Q." << monto_total << std::endl;

    return 0;
}
