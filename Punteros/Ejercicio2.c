/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int x = 30, y = 50;
    int *pe;
    pe = &x;
    printf("Lo apuntado por pe es:%i\n",*pe);
    printf("La direccion que almacena pe es: %p\n",pe);

    pe=&y;
    printf("Lo que apunta pe es: %i\n",*pe);
    printf("La direccion que almacena pe es:%p\n",pe);


    getch();
    return 0;
}