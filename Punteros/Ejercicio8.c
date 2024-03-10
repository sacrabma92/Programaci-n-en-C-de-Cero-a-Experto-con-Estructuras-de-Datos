/*}


*/

#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pro){
    printf("Ingrese el codigo: ");
    scanf("%i",&pro->codigo);
    fflush(stdin);

    printf("Ingrese la descripcion: ");
    gets(pro->descripcion);

    printf("Ingrese el precio: ");
    scanf("%i",&pro->precio);
}

void imprimir(struct producto pro){
    printf("Codigo: %i\nDescripcion: %s\nPrecio: %f",pro.codigo, pro.descripcion, pro.precio);
}

int main(){
    struct producto pro;

    cargar(&pro);
    imprimir(pro);


    getch();
    return 0;
}