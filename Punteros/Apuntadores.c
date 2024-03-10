/*
Demostrar el uso basico de punteros
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int numero = 50;
    int *pNumero;
    printf("Dato: %i\n",numero);
    printf("Posicion %p",&numero);

    pNumero = &numero; //&numero = posicion en memoria de numero
    printf("\nValor de la variable\n");
    printf("Dato: %i",numero);
    printf("\nDato: %i",*pNumero);

    printf("Posicion de memoria:\n");
    printf("Posicion: %p\n",&numero);
    printf("Posicion: %p",pNumero);

    getch();
    return 0;
}