/*
Estructura en C
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

struct persona {
    char nombre[40];
    int edad;
}persona1, persona2;

int main(){

    printf("Ingrese el nombre: ");
    gets(persona1.nombre);

    printf("Ingrese la edad: ");
    scanf("%i",&persona1.edad);
    fflush(stdin);

    printf("Ingrese el nombre");
    gets(persona2.nombre);

    printf("Ingrese la edad: ");
    scanf("%i",&persona2.edad);

    printf("Su nombnres es: %s\n",persona1.nombre);
    printf("Su edad es: %i\n\n",persona1.edad);

    printf("Su nombnres es: %s\n",persona2.nombre);
    printf("Su edad es: %i",persona2.edad);



    getch();
    return 0;
}
