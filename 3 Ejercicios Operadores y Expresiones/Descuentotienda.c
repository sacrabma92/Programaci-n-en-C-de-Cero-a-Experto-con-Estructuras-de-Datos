/*
Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto debera pagar finalmente por su compra
*/

#include<stdio.h>
#include<conio.h>

int main(){

    float compra_total, pagar, descuento;

    printf("Ingrese el valor de la compra total: ");
    scanf("%f",&compra_total);

    descuento = compra_total - (compra_total * 0.15);

    printf("El valor a cancelar es de $ %.0f",descuento);

    getch();
    return 0;
}