/*
Programa que permite leer la edad, la estatura y el peso de una persona
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int edad;
    float peso, estatura;

    printf("Ingrese la edad: ");
    scanf("%i",&edad);

    printf("Ingrese el peso: ");
    scanf("%f",&peso);

    printf("Ingrese la estatura: ");
    scanf("%f",&estatura);

    getch();
    return 0;
}