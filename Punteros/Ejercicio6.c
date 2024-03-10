/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void intercambiar(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int x,y;

    x = 100;
    y = 300;

    printf("X:%i  -  Y:%i\n",x,y);
    intercambiar(&x,&y);
    printf("X:%i  -  Y:%i",x,y);



    getch();
    return 0;
}