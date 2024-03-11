/*}


*/

#include<stdio.h>
#include<conio.h>


int main(){
    int var;

    printf("Ingrese el valor de 1 a 5: ");
    scanf("%i",&var);

    switch(var){
        case 1:
            printf("Ingreso el 1");
            break;
        case 2:
            printf("Ingreso el 2");
            break;
        case 3:
            printf("Ingreso el 3");
            break;
        case 4:
            printf("Ingreso el 4");
            break;
        case 5:
            printf("Ingreso el 6");
            break;
        default:
            printf("El valor no esta entre 1 y 5");
            break;
    }


    getch();
    return 0;
}