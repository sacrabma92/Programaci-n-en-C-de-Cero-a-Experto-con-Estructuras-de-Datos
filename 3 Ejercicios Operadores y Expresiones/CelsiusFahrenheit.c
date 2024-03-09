/*
Convertir grados celsius a fahrenheit
*/

#include<stdio.h>
#include<conio.h>

int main(){

    float celsius, fahrenheit;

    printf("Ingrese cantidad de grados Celsius a convertir:");
    scanf("%f",&celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("%i Celius es %.0f Fahrenheit",celsius,fahrenheit);

    getch();
    return 0;
}