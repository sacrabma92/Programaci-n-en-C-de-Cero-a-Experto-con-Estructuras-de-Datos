/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define TAMANO 4

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto pro[TAMANO]){
    for(int i = 0; i < TAMANO; i++){
        printf("Ingresa codigo: ");
        scanf("%i",&pro[i].codigo);
        fflush(stdin);

        printf("Ingrese la descripcion: ");
        gets(pro[i].descripcion);

        printf("ingrese el precio: ");
        scanf("%i", &pro[i].precio);
        fflush(stdin);
    }
}

void imprimir(struct producto pro[TAMANO]){
    for(int i = 0; i < TAMANO; i++){
        printf("El codigo es: %i Descripcion: %s y el Precio: %i\n", pro[i].codigo, pro[i].descripcion, pro[i].precio);
    }
}

void mayorPrecio(struct producto pro[TAMANO]){
    int pos = 0;
    for(int i = 0; i < TAMANO; i++){
        if(pro[i].precio > pro[pos].precio){
            pos = i;
        }
    }
    printf("El producto mas caro: %s",pro[pos].descripcion);
}

int main(){

    struct producto vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    mayorPrecio(vector);


    getch();
    return 0;
}