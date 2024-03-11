/*
Calcular tarifa de saldo en celulares y ponder precios
De 1000 a 1500 Premium
De 500 a 999 Intermedia
De 100 a 499 Basica
*/

#include<stdio.h>
#include<conio.h>

#define tarifa1 "Premium"
#define tarifa2 "Intermedia"
#define tarifa3 "Basica"

int main(){

    int saldo;

    printf("Ingresa la tarifa a recargar: ");
    scanf("%i",&saldo);

    if(saldo >= 1000 && saldo <= 1500){
        printf("%s",tarifa1);
    }else{
        if(saldo >= 500 && saldo <= 999){
            printf("%s",tarifa2);
        }else{
            if(saldo >= 100 && saldo <= 499){
                printf("%s",tarifa3);
            }
        }
    }

    getch();
    return 0;
}