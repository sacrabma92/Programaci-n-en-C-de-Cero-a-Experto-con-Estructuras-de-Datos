/*}


*/

#include<stdio.h>
#include<conio.h>
#define TAMANO 5

void cargar(int vector[TAMANO]){
    for(int i = 0; i < TAMANO; i++){
        printf("Ingresa el numero: ");
        scanf("%i",&vector[i]);
    }
}

void imprimir(int vector[TAMANO]){
    for(int i = 0; i < TAMANO; i++){
        printf("%i\n",vector[i]);
    }
}

void mayor(int vector[TAMANO]){
    int mayor = vector[0];
    for(int i = 0; i < TAMANO; i++){
        if(vector[i] > mayor){
            mayor = vector[i];
        }
    }
    printf("El mayor es %i\n", mayor);
}

void menor(int vector[TAMANO]){
    int menor = vector[0];
    for(int i = 0; i < TAMANO; i++){
        if(vector[i] < menor){
            menor = vector[i];
        }
    }
    printf("El menor es %i\n", menor);
}


int main(){

    int valor = 1, menu;
    int vector[TAMANO];

    do{
        printf("1) Cargar el vector\n");
        printf("2) Mostrarlo\n");
        printf("3) Imprimir el mayor\n");
        printf("4) Imprimir el menor\n");
        printf("5) Finalizar el programa\n");
        scanf("%i",&menu);

        switch (menu)
        {
        case 1:
            cargar(vector);
            break;
        case 2:
            imprimir(vector);
            break;
        case 3:
            mayor(vector);
            break;
        case 4:
            menor(vector);
            break;
        case 5:
            printf("Saliendo....");
            valor = 0;
            break;
        default:
            printf("Valor no valido");
            break;
        }

    }while(valor != 0);


    getch();
    return 0;
}