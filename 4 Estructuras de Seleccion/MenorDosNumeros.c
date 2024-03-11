/*
El menor de dos numeros
*/

#include<stdio.h>
#include<conio.h>


int main(){
    int num1, num2;
    printf("Ingrese el numero 1: ");
    scanf("%i",&num1);

    printf("Ingrese el numero 2: ");
    scanf("%i",&num2);

    if(num1 < num2){
        printf("El numero menor es: %i",num1);
    }else{
        printf("El numero menor es: %i",num2);
    }

    getch();
    return 0;
}