/*

*/

#include<stdio.h>
#include<conio.h>


int main(){
    int *p1;
    p1 = malloc(sizeof(int));

    if(p1 == NULL){
        printf("Memoria Llena\n");
    }else{
        printf("Hay Espacio\n");
        *p1 = 20;
        printf("\n%i",*p1);
    }

    free(p1);

    printf("\n%i",*p1);

    getch();
    return 0;
}