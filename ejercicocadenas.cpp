//strcpy y scrcat
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char nombre[20] = "Jose";
char apellido[20] = "Perez";
strcpy(nombre, apellido); 
printf("Cadena copiada: %s \n", nombre);

strcat(nombre, " "); 
strcat(nombre, apellido); 
printf("Cadena concatenada: %s \n", nombre);

return 0;




//strlen
   char nombre [ 10 ] ;
    int numletras ;
   
    printf ( "Intro nombre: " ) ;
    scanf ( "%s" , nombre ) ;
   
    numletras = strlen ( nombre ) ;
   
    printf ( "El numero de letras es: %d" , numletras ) ;

//Strcmp
char nombre[20] = "Jose";
char apellido[20] = "Perez";
if (strcmp(nombre,apellido) == 0) 
printf("las cadenas son iguales \n");
}
        else: 
{
    printf ("las cadensa No son iguales. \n")
}
return 0;
    
//Isalnum
int main()
{
   char cadena[] = ";0sR(h&R1/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], isalnum(cadena[i]));

   return 0;
}

//isalpha
int main()
{
   char cadena[] = ";0sR(h&R1/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], isalpha(cadena[i]));

   return 0;
}

//isblank
int main() {
    char character = ' ';  // Puedes cambiar esto por el carácter que quieras verificar.

    if (std::isblank(character)) {
        std::cout << "Es un espacio en blanco o tabulación." << std::endl;
    } else {
        std::cout << "No es un espacio en blanco ni tabulación." << std::endl;
    }

    return 0;
}

//Substr
int main() {
    std::string cadena = "Programación en C++";
    std::string subcadena = cadena.
    std::string
substr(13);
    std::cout << 
"Subcadena: " << subcadena << std::endl;

    return 0;
}

// tolower

int main() {
    std::cout << 
"Ingresa una cadena de texto: ";
    std::string cadena;
    std::getline(std::cin, cadena); // Leer una línea de entrada

    // Convertir la cadena a minúsculas
    for (char &c : cadena) {
        c = std::tolower(c);
    }

    // Mostrar la cadena en minúsculas
    std::cout << 
"Cadena en minúsculas: " << cadena << std::endl;

    return 0;
}

//toupper

int main() {
    std::cout<<
"Ingresa una cadena de texto: ";
    std::string cadena;
    std::
    std::string cadena;
    std::getline

    std::string cadena;
    std

    std::string cadena;
   

    std::
getline(std::cin, cadena);

    for (char &c : cadena) c = std::toupper(c);
    std::cout<<
"Cadena en mayúsculas: " << cadena << std::endl;
    return 0;
}





