/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define TAMANO 3

struct fecha{
    int dd;
    int mm;
    int aa;
};

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
};

void cargar(struct producto pro[TAMANO]){
    for(int i = 0; i < TAMANO; i++){
        printf("Ingrese el codigo: ");
        scanf("%i",&pro[i].codigo);
        fflush(stdin);

        printf("Ingrese la descipcion: ");
        gets(pro[i].descripcion);

        printf("Precio: ");
        scanf("%f",&pro[i].precio);

        printf("Ingrese el dia: ");
        scanf("%i",&pro[i].fechavencimiento.dd);

        printf("Ingrese el mes: ");
        scanf("%i",&pro[i].fechavencimiento.mm);

        printf("Ingrese el anio: ");
        scanf("%i",&pro[i].fechavencimiento.aa);
    }
}

void imprimir(struct producto pro[TAMANO]){
    for(int i = 0; i < TAMANO; i++){
        printf("Codigo: %i\nDescripcion: %s\nPrecio: %f\nDia:%i Mes:%i Anio:%i",pro[i].codigo, pro[i].descripcion, pro[i].precio, pro[i].fechavencimiento.dd, pro[i].fechavencimiento.mm, pro[i].fechavencimiento.aa);
    }
}

int main(){

    struct producto pro[TAMANO];

    cargar(pro);
    imprimir(pro);


    getch();
    return 0;
}