/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int cargar(int *a){
    *a += 20;
}

int main(){

    int numero;
    printf("Ingrese el numero:");
    scanf("%i",&numero);

    cargar(&numero);

    printf("%i",numero);


    getch();
    return 0;
}