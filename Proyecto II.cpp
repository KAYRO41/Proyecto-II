#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Definición de la estructura de LosProductos
struct LosProductos {
    string losNombres;
    string losCodigos;
    double losPrecios;
    string Proveedores;
    int Existencias;
    char LosEstados;  // A = Aprobado, R = Reprobado
    double LosDescuentos;
};

// Función para agregar un LosProductos
void agregar_LosProductos(vector<LosProductos>& LosProductoss, const LosProductos& LosProductos) {
    for (const LosProductos& p : LosProductoss) {
        if (p.losCodigos == LosProductos.losCodigos) {
            cout << "El código de LosProductos ya existe. No se puede agregar." << endl;
            return;
        }
    }
    LosProductoss.push_back(LosProductos);
    cout << "LosProductos agregado exitosamente." << endl;
}

// Función para buscar un LosProductos por código o losNombres
vector<LosProductos> buscar_LosProductos(const vector<LosProductos>& LosProductoss, const string& busqueda) {
    vector<LosProductos> resultados;
    for (const LosProductos& LosProductos : LosProductoss) {
        if (busqueda == LosProductos.losCodigos || busqueda == LosProductos.losNombres) {
            resultados.push_back(LosProductos);
        }
    }
    return resultados;
}

// Función para modificar los datos de un LosProductos
void modificar_LosProductos(vector<LosProductos>& LosProductoss, const string& losCodigos, double Nuevos_losPrecios, const string& Nuevos_Proveedores, int Nueva_Existencias, char Nuevos_LosEstados, double Nuevos_LosDescuentos) {
    for (LosProductos& LosProductos : LosProductoss) {
        if (LosProductos.losCodigos == losCodigos) {
            LosProductos.losPrecios = Nuevos_losPrecios;
            LosProductos.Proveedores = Nuevos_Proveedores;
            LosProductos.Existencias = Nueva_Existencias;
            LosProductos.LosEstados = Nuevos_LosEstados;
            LosProductos.LosDescuentos = Nuevos_LosDescuentos;
            cout << "Datos del LosProductos modificados exitosamente." << endl;
            return;
        }
    }
    cout << "LosProductos no encontrado." << endl;
}

int main() {
    vector<LosProductos> LosProductoss;  // Vector para almacenar LosProductoss

    // Verificar si el archivo ya existe y cargar la información
    ifstream archivo("LosProductoss.dat", ios::binary);
    if (archivo) {
        LosProductos LosProductos;
        while (archivo.read((char*)&LosProductos, sizeof(LosProductos))) {
            LosProductoss.push_back(LosProductos);
        }
        archivo.close();
    }

    while (true) {
        cout << "\nMenú:" << endl;
        cout << "1. Agregar LosProductos" << endl;
        cout << "2. Buscar LosProductos" << endl;
        cout << "3. Modificar datos de LosProductos" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opción: ";
        string opcion;
        cin >> opcion;

        if (opcion == "1") {
            LosProductos LosProductos;
            cout << "losNombres del LosProductos: ";
            cin >> LosProductos.losNombres;
            cout << "Código de LosProductos: ";
            cin >> LosProductos.losCodigos;
            cout << "losPrecios de LosProductos: ";
            cin >> LosProductos.losPrecios;
            cout << "Proveedores: ";
            cin >> LosProductos.Proveedores;
            cout << "Existencias: ";
            cin >> LosProductos.Existencias;
            cout << "LosEstados (A = Aprobado, R = Reprobado): ";
            cin >> LosProductos.LosEstados;
            cout << "LosDescuentos: ";
            cin >> LosProductos.LosDescuentos;

            agregar_LosProductos(LosProductoss, LosProductos);
        } else if (opcion == "2") {
            string busqueda;
            cout << "Ingrese el código o losNombres a buscar: ";
            cin >> busqueda;
            vector<LosProductos> resultados = buscar_LosProductos(LosProductoss, busqueda);
            if (!resultados.empty()) {
                cout << "Resultados de la búsqueda:" << endl;
                for (const LosProductos& LosProductos : resultados) {
                    cout << "Código: " << LosProductos.losCodigos << ", losNombres: " << LosProductos.losNombres << endl;
                }
            } else {
                cout << "LosProductos no encontrado." << endl;
            }
        } else if (opcion == "3") {
            string losCodigos;
            cout << "Ingrese el código de LosProductos a modificar: ";
            cin >> losCodigos;
            double Nuevos_losPrecios;
            cout << "Nuevos losPrecios: ";
            cin >> Nuevos_losPrecios;
            string Nuevos_Proveedores;
            cout << "Nuevos Proveedores: ";
            cin >> Nuevos_Proveedores;
            int Nueva_Existencias;
            cout << "Nueva Existencias: ";
            cin >> Nueva_Existencias;
            char Nuevos_LosEstados;
            cout << "Nuevos LosEstados (A = Aprobado, R = Reprobado): ";
            cin >> Nuevos_LosEstados;
            double Nuevos_LosDescuentos;
            cout << "Nuevos LosDescuentos: ";
            cin >> Nuevos_LosDescuentos;
            modificar_LosProductos(LosProductoss, losCodigos, Nuevos_losPrecios, Nuevos_Proveedores, Nueva_Existencias, Nuevos_LosEstados, Nuevos_LosDescuentos);
        } else if (opcion == "4") {
            // Guardar la información en el archivo
            ofstream archivo("LosProductoss.dat", ios::binary);
            for (const LosProductos& LosProductos : LosProductoss) {
                archivo.write((char*)&LosProductos, sizeof(LosProductos));
            }
            archivo.close();
            cout << "Saliendo de la aplicación. Los datos han sido guardados." << endl;
            break;
        } else {
            cout << "Opción no válida. Intente de Nuevos." << endl;
        }
    }

    return 0;
}
