#include<stdio.h>
#include<conio.h>

int suma(int *a, int *b){
    int suma = 0;
    suma = (*a) + (*b); 
    return suma;
}

int resta(int *a, int *b){
    int resta = 0;
    resta = *a - *b; 
    return resta;
}