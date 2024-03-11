/*}


*/

#include<stdio.h>
#include<conio.h>


int main(){
    int x,y;
    char op;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%i",&x);

    printf("Ingrese el segundo numero: ");
    scanf("%i",&y);

    printf("ingrese la operacion + - / * : ");
    scanf(" %c",&op);

    switch (op) {
        case '+':
            resultado = x + y; 
            printf("Suma: %i", resultado);
            break;
        case '-':
            resultado = x - y; 
            printf("Resta: %i", resultado);
            break;
        case '*':
            resultado = x * y; 
            printf("Multi: %i", resultado);
            break;
        case '/':
            resultado = x / y; 
            printf("Division: %i", resultado);
            break;
        default:
            break;
    }

    getch();
    return 0;
}