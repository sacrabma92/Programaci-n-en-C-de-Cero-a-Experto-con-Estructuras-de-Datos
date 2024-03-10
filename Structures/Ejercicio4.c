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

struct producto cargar(){
    struct producto pro;
    printf("Ingrese el codigo: ");
    scanf("%i",&pro.codigo);
    fflush(stdin);

    printf("Ingrese la descripcion: ");
    gets(pro.descripcion);

    printf("Ingrese el precio: ");
    scanf("%f",&pro.precio);

    return pro;
}

void imprimir(struct producto pro){
    printf("Codigo: %i\n",pro.codigo);
    printf("Descripcion: %s\n",pro.descripcion);
    printf("Precio: %f",pro.precio);
}

int main(){

    struct producto pro1, pro2;

    // pro1 = cargar();
    imprimir(cargar(pro1));


    getch();
    return 0;
}