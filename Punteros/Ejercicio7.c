/*

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define TAMANO 3

void cargar(int vector[TAMANO]){
    for(int i = 0; i < TAMANO; i++){
        printf("Cargar el numero: ");
        scanf("%i",&vector[i]);
        fflush(stdin);
    }
}

void mayorMenor(int vec[TAMANO], int *may, int *men){
    *may = vec[0];
    *men = vec[0];
    for(int i = 0; i < TAMANO; i++){   
        if(vec[i] > *may){
            *may = vec[i];
        }else{
            if(vec[i] < *men){
                *men = vec[i];
            }
        }
    }
}

int main(){

    int vector[TAMANO];
    int x,y;

    cargar(&vector);
    mayorMenor(vector, &x, &y);

    printf("El numero mayor es: %i\n",x);
    printf("El numero menor es: %i\n",y);


    getch();
    return 0;
}