### Universidad Mariano Gálvez
### Centro Regional: Boca del monte  
### Facultad: Ingeniería en sistemas
### Curso: Algoritmos
### Sección: C     



## Proyecto II


### Nombre: Elmer Yúnior Roblero Santos

### Numero de carnet: 7690-23-14847 

### Fecha:13/10/2023

### Guatemala, de 2023
 
## Aqui el video 
[Vieo de muestra de los algoritmos](https://youtu.be/OlmM7bNT9os)
## Documentacion Externa del codigo en python
Documentación del Sistema de Gestión de Productos
Descripción
Este sistema de gestión de productos está diseñado para ayudar a administrar una lista de productos. Permite agregar productos, buscar productos por código o nombre, modificar los datos de un producto existente y guardar la información en un archivo para futuras sesiones.
Clases
LosProductos
Esta clase define la estructura de un producto. Cada producto tiene los siguientes atributos:
•	`losNombres`: El nombre del producto.
•	`losCodigos`: El código único del producto.
•	`losPrecios`: El precio del producto.
•	`Proveedores`: El proveedor del producto.
•	`Existencias`: La cantidad de existencias disponibles.
•	`LosEstados`: El estado del producto (A = Aprobado, R = Reprobado).
•	`LosDescuentos`: El descuento aplicado al producto.
Funciones
agregar_LosProductos(LosProductoss, LosProductos)
Esta función agrega un producto a la lista de productos `LosProductoss`. Verifica si el código del producto ya existe en la lista y muestra un mensaje de error si es el caso.

buscar_LosProductos(LosProductoss, busqueda)
Esta función busca productos en la lista `LosProductoss` por código o nombre. Devuelve una lista de productos que coinciden con la búsqueda.

modificar_LosProductos(LosProductoss, losCodigos, Nuevos_losPrecios, Nuevos_Proveedores, Nueva_Existencias, Nuevos_LosEstados, Nuevos_LosDescuentos)
Esta función permite modificar los datos de un producto existente en la lista `LosProductoss`. Busca el producto por su código y actualiza sus atributos con los nuevos valores proporcionados.

-Uso del Programa
Ejecuta el programa y selecciona una opción del menú:
•	para agregar un producto. Debes proporcionar los detalles del producto.
•	para buscar un producto por código o nombre. Ingresa la búsqueda y muestra los resultados.
•	para modificar los datos de un producto existente. Proporciona el código del producto y los nuevos valores.
•	para salir del programa. Los datos se guardarán en un archivo "LosProductoss.pkl".

2. Si eliges la opción
•	4 los datos se guardarán en un archivo "LosProductoss.pkl" para su uso posterior.
Ejemplo de Uso
- Agregar un producto:
•	losNombres: Producto1
•	Código de LosProductos: 001
•	losPrecios de LosProductos: 19.99
•	Proveedores: Proveedor1
•	Existencias: 50
•	LosEstados (A = Aprobado, R = Reprobado): A
•	LosDescuentos: 5.0
- Buscar un producto:
•	Ingrese el código o losNombres a buscar: 001
- Modificar un producto:
•	Ingrese el código de LosProductos a modificar: 001
•	Nuevos losPrecios: 24.99
•	Nuevos Proveedores: Proveedor2
•	Nueva Existencias: 75
•	Nuevos LosEstados (A = Aprobado, R = Reprobado): R
•	Nuevos LosDescuentos: 3.0

Notas Importantes
Asegúrate de que el archivo "LosProductoss.pkl" no esté en uso por otra instancia del programa para evitar problemas de concurrencia en la escritura/lectura del archivo.
Esta es la documentación básica del sistema de gestión de productos. Si tienes alguna pregunta adicional o necesitas ayuda específica, no dudes en preguntar. 
 
![captura de pantalla python](file:///C:/Users/Usuario/Pictures/Screenshots/Captura%20de%20pantalla%20(233).png)

### Documentación Externa del Código en C++

Documentación del Sistema de Gestión de Productos
Descripción
Este código en C++ gestiona una lista de productos llamados `LosProductos`. Proporciona funciones para agregar, buscar y modificar productos. Además, los datos de los productos se almacenan en un archivo binario para su persistencia.

Estructura de LosProductos
La estructura `LosProductos` representa un producto y contiene los siguientes campos:
•	`losNombres` (string): El nombre del producto.
•	`losCodigos` (string): El código del producto.
•	`losPrecios` (double): El precio del producto.
•	`Proveedores` (string): El proveedor del producto.
•	`Existencias` (int): La cantidad de existencias del producto.
•	`LosEstados` (char): El estado del producto (A = Aprobado, R = Reprobado).
•	`LosDescuentos` (double): El descuento aplicado al producto.

Funciones Principales
1. `agregar_LosProductos`: Agrega un producto a la lista de `LosProductoss`. Verifica que el código del producto no exista previamente.
2. `buscar_LosProductos`: Busca productos en la lista por código o nombre y devuelve una lista de resultados.
3. `modificar_LosProductos`: Modifica los datos de un producto en la lista utilizando su código.

Flujo Principal
1. El programa carga datos de productos desde un archivo binario si existe.
2. Muestra un menú con opciones:
•	Agregar un producto
•	Buscar un producto por código o nombre
•	Modificar los datos de un producto
•	Salir del programa
3. Los datos ingresados por el usuario se procesan según la opción elegida.
4. Los productos y las modificaciones se almacenan en un archivo binario antes de salir del programa.

Uso
1. Compila el código utilizando un compilador C++.
2. Ejecuta el programa y sigue las opciones del menú para gestionar productos.
3. Los datos de los productos se guardarán en un archivo binario llamado "LosProductoss.dat" para su persistencia.

Esta es una documentación externa simplificada para comprender el propósito y las funciones del código en C++. Puedes expandirla según tus necesidades específicas y agregar detalles adicionales, como requisitos del sistema o ejemplos de uso.

![captura de pantalla c++](file:///C:/Users/Usuario/Pictures/Screenshots/Captura%20de%20pantalla%20(234).png)


### Python 
```Python
# Definición de la estructura de LosProductos
class LosProductos:
    def __init__(self, losNombres, losCodigos, losPrecios, Proveedores, Existencias, LosEstados, LosDescuentos):
        self.losNombres = losNombres
        self.losCodigos = losCodigos
        self.losPrecios = losPrecios
        self.Proveedores = Proveedores
        self.Existencias = Existencias
        self.LosEstados = LosEstados
        self.LosDescuentos = LosDescuentos

# Función para agregar un LosProductos
def agregar_LosProductos(LosProductoss, LosProductos):
    for p in LosProductoss:
        if p.losCodigos == LosProductos.losCodigos:
            print("El código de LosProductos ya existe. No se puede agregar.")
            return
    LosProductoss.append(LosProductos)
    print("LosProductos agregado exitosamente.")

# Función para buscar un LosProductos por código o losNombres
def buscar_LosProductos(LosProductoss, busqueda):
    resultados = []
    for LosProductos in LosProductoss:
        if busqueda in LosProductos.losCodigos or busqueda in LosProductos.losNombres:
            resultados.append(LosProductos)
    return resultados

# Función para modificar los datos de un LosProductos
def modificar_LosProductos(LosProductoss, losCodigos, Nuevos_losPrecios, Nuevos_Proveedores, Nueva_Existencias, Nuevos_LosEstados, Nuevos_LosDescuentos):
    for LosProductos in LosProductoss:
        if LosProductos.losCodigos == losCodigos:
            LosProductos.losPrecios = Nuevos_losPrecios
            LosProductos.Proveedores = Nuevos_Proveedores
            LosProductos.Existencias = Nueva_Existencias
            LosProductos.LosEstados = Nuevos_LosEstados
            LosProductos.LosDescuentos = Nuevos_LosDescuentos
            print("Datos del LosProductos modificados exitosamente.")
            return
    print("LosProductos no encontrado.")

# Función principal
def main():
    LosProductoss = []  # Lista para almacenar LosProductoss

    # Verificar si el archivo ya existe y cargar la información
    if os.path.exists("LosProductoss.pkl"):
        with open("LosProductoss.pkl", "rb") as archivo:
            LosProductoss = pickle.load(archivo)

    while True:
        print("\nMenú:")
        print("1. Agregar LosProductos")
        print("2. Buscar LosProductos")
        print("3. Modificar datos de LosProductos")
        print("4. Salir")
        opcion = input("Elija una opción: ")

        if opcion == "1":
            losNombres = input("losNombres del LosProductos: ")
            losCodigos = input("Código de LosProductos: ")
            losPrecios = float(input("losPrecios de LosProductos: "))
            Proveedores = input("Proveedores: ")
            Existencias = int(input("Existencias: "))
            LosEstados = input("LosEstados (A = Aprobado, R = Reprobado): ").upper()
            LosDescuentos = float(input("LosDescuentos: "))

            LosProductos = LosProductos(losNombres, losCodigos, losPrecios, Proveedores, Existencias, LosEstados, LosDescuentos)
            agregar_LosProductos(LosProductoss, LosProductos)
        elif opcion == "2":
            busqueda = input("Ingrese el código o losNombres a buscar: ")
            resultados = buscar_LosProductos(LosProductoss, busqueda)
            if resultados:
                print("Resultados de la búsqueda:")
                for LosProductos in resultados:
                    print(f"Código: {LosProductos.losCodigos}, losNombres: {LosProductos.losNombres}")
            else:
                print("LosProductos no encontrado.")
        elif opcion == "3":
            losCodigos = input("Ingrese el código de LosProductos a modificar: ")
            Nuevos_losPrecios = float(input("Nuevos losPrecios: "))
            Nuevos_Proveedores = input("Nuevos Proveedores: ")
            Nueva_Existencias = int(input("Nueva Existencias: "))
            Nuevos_LosEstados = input("Nuevos LosEstados (A = Aprobado, R = Reprobado): ").upper()
            Nuevos_LosDescuentos = float(input("Nuevos LosDescuentos: "))
            modificar_LosProductos(LosProductoss, losCodigos, Nuevos_losPrecios, Nuevos_Proveedores, Nueva_Existencias, Nuevos_LosEstados, Nuevos_LosDescuentos)
        elif opcion == "4":
            # Guardar la información en el archivo
            with open("LosProductoss.pkl", "wb") as archivo:
                pickle.dump(LosProductoss, archivo)
            print("Saliendo de la aplicación. Los datos han sido guardados.")
            break
        else:
            print("Opción no válida. Intente de Nuevos.")

if __name__ == "__main__":
    main()
```

### En c++
```c++
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
```


    return 0;
}
