/*
Hacer un programita que escriba en la salida estándar el valor de dicho número. Como todo el mundo sabe, el número ir se puede obtener como resultado del arco coseno de -1.
/************************************************/ 
/* Objetivo: Escribir en la Salida Estándar */ 
/* el valor del número PI. */ 
/************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){

    printf("%f", acos(-1)); // Arco-conseno

    getch();
    return 0;
}