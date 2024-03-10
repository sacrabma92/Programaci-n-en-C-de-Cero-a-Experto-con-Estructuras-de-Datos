/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void cargar(int *a){
    *a += 1;
}

int main(){

    int variable = 0;

    cargar(&variable);
    printf("%i\n",variable);
    cargar(&variable);
    printf("%i\n",variable);


    getch();
    return 0;
}