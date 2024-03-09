// Calcular el area de un trapecio
#include<stdio.h>
#include<conio.h>

int main(){

    int base_Mayor, base_Menor, altura;
    float area;

    printf("Ingrese la base Mayor del trapecio:");
    scanf("%i",&base_Mayor);

    printf("Ingrese la base Menor del trapecio:");
    scanf("%i",&base_Menor);

    printf("Ingrese la Altura trapecio:");
    scanf("%i",&altura);

    area = ((base_Mayor +  base_Menor)*altura) / 2;

    printf("El areal del trapecion ingresado es de: %.2f",area);

    getch();
    return 0;
}