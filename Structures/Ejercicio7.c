/*

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct libro{
    int codigo;
    char titulo[40];
    char autor[30];
};

void cargar(struct libro vec[4]){
    for(int i = 0; i < 4; i++){
        printf("Ingrese codigo: ");
        scanf("%i",&vec[i].codigo);
        fflush(stdin);

        printf("Ingrese el titulo: ");
        gets(vec[i].titulo);
        fflush(stdin);

        printf("Ingrese el autor: ");
        gets(vec[i].autor);
    }
}

void imprimir(struct libro vec[4]){
    for(int i = 0; i < 4; i++){
    printf("Codigo: %i Titulos %s del autor %s\n",vec[i].codigo, vec[i].titulo, vec[i].autor);
    }
}

void imprimirAutor(struct libro vec[4]){
    char nombre[40];
    printf("Ingrese el autor: ");
    gets(nombre);
        for(int i = 0; i < 4; i++){
            if(strcmp(nombre,vec[i].autor) ){
                printf("%s\n",vec[i].titulo);
            }
        }
}

int main(){

    struct libro vector[4];

    cargar(vector);
    imprimir(vector);
    imprimirAutor(vector);


    getch();
    return 0;
}