/*

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


// int main(){
//     int *a;
//     int x;
//     a = malloc(sizeof(int)); // Reserveme en memoria un tamaño que es entera. En este caso 4 bytes

//     *a = 5;
//     printf("%i",*a);

//     free(a);
//     getch();
//     return 0;
// }
int main(){
    float *a;
    float x;
    a = malloc(sizeof(float)); // Reserveme en memoria un tamaño que es entera. En este caso 4 bytes

    *a = 12.45;
    printf("%.2f",*a);

    free(a);

    getch();
    return 0;
}