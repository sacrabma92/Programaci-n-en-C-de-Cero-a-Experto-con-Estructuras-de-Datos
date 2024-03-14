/*

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    int *vector, *vectorConvertido;

    // Reserva memoria para 3 elementos
    vector = malloc(3*sizeof(int));

    // Primer vector
    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    for( int i = 0; i < 3; i++ ){
        printf("%i\n", vector[i]);
    }

    // realloc
    // Ampliamos el arreglo a 5
    vectorConvertido = realloc(vector,5 * sizeof(int));

    // Agregamos los demas valores
    vector[3] = 5;
    vector[4] = 10;
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%i\n",vectorConvertido[i]);
    }

    free(vectorConvertido);

    getch();
    return 0;
}