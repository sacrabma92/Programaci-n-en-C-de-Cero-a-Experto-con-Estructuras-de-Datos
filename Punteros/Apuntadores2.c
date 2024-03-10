/*

*/

#include<stdio.h>
#include<conio.h>

int main(){

    // Declaramos las variables
    int a = 19, b = 20;

    // Declaramos los apuntadores a las referencia de las variables

    int *apuntadorA = &a;
    int *apuntadorB = &b;

    printf("El valor de a es: %d\n",a);
    printf("La ubicacion de memeoria del apuntador es:: %p\n",apuntadorA);
    printf("%d\n",*apuntadorA);

    // Le cambiamos el valor al apuntador
    *apuntadorA = 123;
    // Imprimirmps la variable a a ver que valor tiene
    printf("El valor de a ahora es: %i",a);


    getch();
    return 0;
}