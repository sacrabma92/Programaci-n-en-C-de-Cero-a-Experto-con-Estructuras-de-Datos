/*
Calcular el nuevo salario de un obrero , si obtuvo un incremento del 25% sobre su salario anterior
*/

#include<stdio.h>
#include<conio.h>

int main(){

    float salario_anterior, salario_nuevo;

    printf("Ingrese el salario anterior: ");
    scanf("%f",&salario_anterior);

    salario_nuevo = (salario_anterior * 0.25) + salario_anterior;

    printf("El nuevo salario es de: %.0f",salario_nuevo);

    getch();
    return 0;
}