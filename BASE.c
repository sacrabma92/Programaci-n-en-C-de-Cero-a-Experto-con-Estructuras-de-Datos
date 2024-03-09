/*
Sacar la hipotenusa de un triangulo rectangulo, pidiendo al usuario el valor de los 2 catetos
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    float cateto1, cateto2, hipotenusa;

    printf("Ingrese el cateto #1: ");
    scanf("%f",&cateto1);

    printf("Ingrese el cateto #2: ");
    scanf("%f",&cateto2);

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    printf("La hipotenusa es: %.0f",hipotenusa);


    getch();
    return 0;
}