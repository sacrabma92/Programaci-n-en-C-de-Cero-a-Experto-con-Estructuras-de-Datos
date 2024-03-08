#include<stdio.h>
#include<conio.h>

int main(){

    int a = 1; // 2 bytes Rango desde -32768 -> 32767
    char b = 'z'; // 1 byte Rango desde 0 -> 255
    float c = 1.545654; // 4 bytes 
    double d = 1555555555555.555555; // 8 bytes
    long e = 1234; // 4 bytes
    short v = 2; // 2 bytes Rango desde -128 -> 127
    unsigned int f = 123; // 2 bytes Rango 0 -> 65535

    printf("El Valor del entero es de %i\n",a);
    printf("El Valor del char es de %c\n",b);
    printf("El Valor del float es de %f\n",c);
    printf("El Valor del double es de %d\n",d);
    printf("El Valor del short es de %i\n",v);
    printf("El Valor del Long es de %li\n",e);
    printf("El Valor del Entero unsigned es de %i\n",f);


    getch();
    return 0;
}