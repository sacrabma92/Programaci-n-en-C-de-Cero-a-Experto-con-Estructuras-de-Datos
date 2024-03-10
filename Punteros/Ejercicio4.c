/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void cargar(int *n1, int *n2){
    printf("Ingrese el numero 1: ");
    scanf("%i",&*n1);

    printf("Ingrese el numero 2: ");
    scanf("%i",&*n2);
}

int main(){

    int num1, num2;
    
    cargar(&num1, &num2);

    printf("Num1: %i\nNum2: %i",num1,num2);


    getch();
    return 0;
}