/*

*/

#include<stdio.h>
#include<conio.h>

struct pais{
    char nombre[40];
    int cantidadhab;
}paises[3];

void cargar(struct pais paises[3]){
    for(int i = 0; i < 3; i++){
        printf("Ingrese el nombre del pais: ");
        gets(paises[i].nombre);

        printf("Ingrese la cantidad de habitantes: ");
        scanf("%i",&paises[i].cantidadhab);
        fflush(stdin);
    }
}

void imprimir(struct pais paises[3]){
    for(int i = 0; i < 3; i++){
        printf("El nombre del pais es: %s con %i de habitantes\n",paises[i].nombre , paises[i].cantidadhab);
    }
}

int main(){

    struct pais paises[3];

    cargar(paises);
    imprimir(paises);



    getch();
    return 0;
}