/*}


*/

#include<stdio.h>
#include<conio.h>
struct pais {
    char nombre[30];
    int cantidadhab;
};

void cargar(struct pais *p){
    printf("Ingrese el nombre del pais: ");
    gets(p->nombre);

    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i",&p->cantidadhab);
}

void imprimir(struct pais p){
    printf("Nombre: %s cantidad de habitantes %i",p.nombre,p.cantidadhab);
}

int main(){

    struct pais p1,p2,p3;

    cargar(&p1);
    imprimir(p1);

    getch();
    return 0;
}