#include<stdio.h>
#include"productos.h"

void cargar(tproducto productos[CANT]){
    for(int i = 0; i < CANT; i++){
        printf("Ingrese el codigo: ");
        scanf("%i",&productos[i].codigo);
        fflush(stdin);

        printf("Ingrese la descripcion: ");
        gets(productos[i].descripcion);

        printf("Ingrese el precio: ");
        scanf("%f",&productos[i].precio);
        fflush(stdin);
    }
}

void imprimir(tproducto productos[CANT]){
    for(int i = 0; i < CANT; i++){
        printf("El codigo es: %i\nDescripcion %s\nEl precio es: %.1f\n",productos[i].codigo, productos[i].descripcion, productos[i].precio);
    }
}