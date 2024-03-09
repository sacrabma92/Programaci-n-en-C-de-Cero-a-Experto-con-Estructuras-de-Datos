/*
Arreglos de Estructuras en C
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

struct persona{
    char nombre[30];
    int edad;
}personas[5];

int main(){

    for(int i = 0; i < 5; i++){
        fflush(stdin);

        printf("%i Ingrese el nombre: ",i);
        gets(personas[i].nombre);

        printf("%i Ingrese su edad: ",i);
        scanf("%i",&personas[i].edad);

        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        printf("\n%i Nombre de la persona : %s\n",i,personas[i].nombre);
        printf("La edad es: %d",personas[i].edad);
    }

    getch();
    return 0;
}