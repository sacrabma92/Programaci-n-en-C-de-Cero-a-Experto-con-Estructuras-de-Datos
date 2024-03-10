/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void imprimir(struct producto pr){
    printf("Codigo: %i Descripcion: %s precio: %i\n",pr.codigo, pr.descripcion, pr.precio);
}

int main(){

    struct producto pro1 = {123, "Banana", 12.45};
    struct producto pro2 = {124, "Manzana", 9.45};
    struct producto pro3 = {125, "pera", 7.45};

    imprimir(pro1);
    imprimir(pro2);
    imprimir(pro3);

    getch();
    return 0;
}