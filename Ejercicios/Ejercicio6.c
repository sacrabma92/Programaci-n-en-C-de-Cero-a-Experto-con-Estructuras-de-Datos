/*

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){

    int *ptr = (int *)calloc(5,sizeof(int));
    char *ptr2 = (char *)calloc(100,sizeof(char));
    int *ptr3 = (int *)malloc(5*sizeof(int));

    // Imprimir las direcciones de un arreglo
    for(int i = 0; i < 5; ++i){
        printf("Direccion del grado [%d] = %p valor arreglo[%d] = %d\n",i,&ptr[i],i,ptr[i]);
    }
    printf("\n");

    // Imprimiendo direcciones y contenido de un apuntador de memoria dinamica reservada con malloc
    for(int i = 0; i < 5; ++i){
        printf("Direccion del grado = %p *valor arreglo = %d\n",ptr3 + i, *(ptr3+i));
    }
    printf("\n");
    //Tabla del 5
    for(int i = 0; i < 10; i++){
        ptr[i] = 5 * (i+1);
    }
    // Imprimirmos los los valroes del apuntador
    for(int i = 0; i < 10; i++){
        printf("5 x %i = %d\n",i+1,*(ptr+i));
    }

    free(ptr);
    free(ptr2);

    getch();
    return 0;
}