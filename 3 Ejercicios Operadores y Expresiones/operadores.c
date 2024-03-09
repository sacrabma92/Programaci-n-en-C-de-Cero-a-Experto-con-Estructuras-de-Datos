#include<stdio.h>
#include<conio.h>
/*
Pedir al usuario que dijite 2 numeros u tenemos que 
Sumarlos, Restarlos, Multiplicarlos y Dividirlos
*/

int main(){

    int num1 = 0, num2 = 0;
    int suma = 0, multi = 0, resta = 0; 
    float divi = 0;

    printf("Ingrese el primer varlos: ");
    scanf("%i",&num1);

    printf("Ingrese el segundo valor: ");
    scanf("%i",&num2);

    suma = num1 + num2;
    divi = num1 / num2;
    multi = num1 * num2;
    resta = num1 - num2;

    printf("La suma es: %i\n",suma);
    printf("La division es: %f\n",divi);
    printf("La multiplicacion es: %i\n",multi);
    printf("La resta es: %i\n",resta);

    getch();
    return 0;
}
