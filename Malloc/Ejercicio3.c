/*
Utilizar malloc para reserver memoria para un nombre(String)
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre,"Carlos"); // Carlos\0
    longitud = strlen(nombre);

    printf("La longitud del nombre es: %i\n",longitud);
    p_nombre = malloc((longitud+1)*sizeof(char));

    strcpy(p_nombre,nombre);
    printf("Nombre: %s",p_nombre);

    free(p_nombre);

    getch();
    return 0;
}