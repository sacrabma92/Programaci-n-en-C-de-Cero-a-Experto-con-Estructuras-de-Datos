/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int variable1, variable2;
    int *ptr;
    ptr = &variable1;
    *ptr = 100;
    ptr = &variable2;
    *ptr = 200;

    printf("Direcciond memoria de ptr: %p\n",ptr);
    printf("Contenido de ptr: %i\n",variable1);

    printf("Direcciond memoria de ptr: %p\n",ptr);
    printf("Contenido de ptr: %i\n",variable2);



    getch();
    return 0;
}