/*

*/

#include<stdio.h>
#include<conio.h>

int main(){

    int array[5] = {10,2,6,3,4};
    int aux,i,j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    // Ascendente
    for(i = 0; i < 5; i++){
        printf("%i ",array[i]);
    }
    printf("\n");
    // Desencente
    for(i = 4; i >= 0; i--){
        printf("%i ",array[i]);
    }
    printf("\n");


    getch();
    return 0;
}