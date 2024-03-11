// formato -> (tipoDeDato*)malloc(memoriaRequeridaEnBytes);
// devuelve -> Un apuntador al primer byte de la memoria entregada o NULL


#include <stdio.h>

int main() {

    //* int* myInteger;
    //* myInteger = (int*)malloc(4);
    //* if (myInteger != NULL)
    //* printf("La memoria se ha otorgado\n");
    //* else
    //* printf("Error al adquirir la memoria\n");
    
    int* array;
    array = (int*)malloc(4*8);
    if (array != NULL)
    printf("La memoria se ha otorgado\n");
    else
    printf("Error al adquirir la memoria\n");

    int* array;
    array = (int*)malloc(sizeof(int)*8);
    if (array != NULL)
    printf("La memoria se ha otorgado\n");
    else
    printf("Error al adquirir la memoria\n");
    free(array);


    #define SIZE 1000000

    int* myArray = (int*)malloc(sizeof(int)*SIZE);
    if (myArray == NULL)
    printf("Se alcanzo el limite de memoria\n");
    free(myArray);


    return 0;
}
