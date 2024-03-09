/*
Calcular la cantidad de segundos que estan incluidos en el numero de horas, minutos y segundos ingresados por el usuario.
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int horas,minutos,segundos,suma;
    int cal_horas, cal_min;

    printf("Ingrese la cantidad de horas:");
    scanf("%i",&horas);
    printf("Ingrese la cantidad de minutos:");
    scanf("%i",&minutos);
    printf("Ingrese la cantidad de segundos:");
    scanf("%i",&segundos);

    cal_horas = horas * 3600;
    cal_min = minutos * 60;
    suma = cal_horas + cal_min + segundos;

    printf("La cantidad de segundos en los datos ingresado es de: %i seg",suma);
    


    getch();
    return 0;
}