#include<stdio.h>
#include<conio.h>
#include "productos.h"

int main(){

    tproducto productos[CANT];
    int opcion;
    do{
        printf("1-Carga de productos. \n");
        printf("2-Listado de productos. \n");
        printf("3-Finalizar programa.. \n");
        printf("Elija su opcion:  \n");
        scanf("%i",&opcion);
        switch (opcion)
        {
        case 1:
            cargar(productos);
            break;
        case 2:
            imprimir(productos);
            break;
        default:
            printf("Debe ser opcion 1, 2, o 3\n");
            break;
        }
    }while(opcion != 3);


    getch();
    return 0;
}