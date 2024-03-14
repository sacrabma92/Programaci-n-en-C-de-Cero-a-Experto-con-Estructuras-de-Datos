/*
Diferencia entre mallco calloc y realloc
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){

    // Reserva la memoria pero trae el contenido basura
    int *maloc = malloc(sizeof(int));
    printf("maloc con entero = %p\n",maloc);
    printf("maloc con entero = %i\n",*maloc);

    // Calloc inicializaa la memoria reservada en 0 o vacio si es char
    int *calo = calloc(10,sizeof(int));
    char *calo2 = calloc(1,sizeof(char));
    printf("calo con entero = %p\n",calo);
    printf("calo con entero = %i\n",*calo);
    printf("caloc con char = %p\n",calo);
    printf("calo con char = %c\n",*calo);

    // realloc reasigna la cantidad de memoria reservada
    int *realo = realloc(maloc, 2 * sizeof(int));
    printf("realloc con entero = %p\n",realo);
    printf("realloc con entero = %i\n",*realo);
    printf("El tamaño reasignado es de = %d bytes\n",sizeof(realo));

    getch();
    return 0;
}