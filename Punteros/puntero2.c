#include<stdio.h>
#include<conio.h>

int mi_arreglo[] = {1,23,17,4,-5,100};
int *ptr;

int main(){

    // ptr = &mi_arreglo[0];
    ptr = mi_arreglo;
    printf("\n\n");
    for(int i = 0; i < 6; i++){
        printf("mi_arreglo[%i] = %d\n",i, mi_arreglo[i]);
        printf("ptr + %d = %d\n",i, *(ptr + i));
        // printf("ptr + %d = %d\n",i, *ptr++);
        // printf("ptr + %d = %d\n",i, *(++ptr));
    }

    getch();
    return 0;
}