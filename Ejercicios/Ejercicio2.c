/*
Hacer un programa que pida por teclado dos números enteros e imprima en pantalla suma, resta, multiplicación, división y el resto (módulo) de la división. Si la operación no es conmutativa, también se mostrará el resultado, invirtiendo los operadores.
*/

#include<stdio.h>
#include<conio.h>


int main(){
    int x, y;

    printf("Ingrese el el primer numero: ");
    scanf("%i",&x);

    printf("Ingrese el el segundo numero: ");
    scanf("%i",&y);

    printf("Suma: %i\n", x + y);
    printf("Resta: %i\n", x - y);
    printf("Resta: %i\n", y - x);
    printf("Multi: %i\n", y * x);
    printf("Division: %.1f\n", y / (float) x);
    printf("Division: %.1f\n", x / (float) y);
    printf("Modulo: %i\n", x % y);
    printf("Modulo: %i\n", y % x);

    getch();
    return 0;
}