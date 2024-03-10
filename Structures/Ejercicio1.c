/*
Declarar un registro que permita almancenar el codigo, descripcion y precio de un producto. Luego Definis dos variables de dicho tipo,
cargarlas e imprimir el nombre del producto que tiene mayor precio
*/

#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[40];
    int precio;
};

void cargar(struct producto pr){
    printf("Ingresa el codigo: ");
    scanf("%i",&pr.codigo);
    fflush(stdin);

    printf("Ingresa la descripcion: ");
    gets(pr.descripcion);

    printf("Ingrese el precio: ");
    printf("%i",&pr.precio);
    fflush(stdin);
}

void imprimir(struct producto pr){
    printf("Codigo: %i\n",pr.codigo);
    printf("Descripcion: %s\n",pr.descripcion);
    printf("Precio: %i",pr.precio);
};

int main(){

    struct producto pro;

    cargar(pro); 
    imprimir(pro);   


    getch();
    return 0;
}