/*
Hacer un Programa que calcula longitudes de Circunferencias
*/

#define PI 3.1415

#include<stdio.h>
#include<conio.h>

int main(){

    float radio, longitud;

    printf("Ingrese el valor del radio de la circunferencia: ");
    scanf("%f",&radio);

    longitud = 2 * PI * radio;

    printf("La longitud del cirgulo es: %.2f",longitud);


    getch();
    return 0;
}