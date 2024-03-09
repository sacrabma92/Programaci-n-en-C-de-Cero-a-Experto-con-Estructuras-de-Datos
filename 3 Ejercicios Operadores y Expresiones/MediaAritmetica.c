/*
Calcular la media aritmetica de 3 numeros cualesquiera dados por el usuario
*/

#include<stdio.h>
#include<conio.h>

int main(){
    float num1,num2,num3,media;

    printf("Ingrese el numero 1: ");
    scanf("%f",&num1);

    printf("Ingrese el numero 2: ");
    scanf("%f",&num2);
    
    printf("Ingrese el numero 3: ");
    scanf("%f",&num3);

    media = (num1 + num2 + num3) / 3; 

    printf("La media de las notas ingresadas es de: %.2f",media);


    getch();
    return 0;
}