/*Aumentar el salario de un empleado 10%*/
#include<stdio.h>
#include<conio.h>

int main(){
    char nombre[40];
    int salario = 0;
    float aumentado = 0;

    printf("Inserte su nombre por favor\n");
    gets(nombre);

    printf("Ingrese su salario: ");
    scanf("%i",&salario);

    aumentado = (salario * 0.10) + salario;

    printf("%s tu sueldo ahora es de: %f",nombre,aumentado);

    getch();
    return 0;
}