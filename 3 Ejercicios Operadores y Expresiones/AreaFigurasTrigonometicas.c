#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    // float base, altura, area;

    // printf("Este programa calcula el area de un triangulo\nInserta la base y la altura\n");
    // scanf("%f %f",&base,&altura);

    // area = (base * altura) / 2;
    // printf("El area del triangulo es %.2f",area);

    float lado, area;

    printf("Este programa calcula el area de un cuadrado\nInserta el valor del lado\n");
    scanf("%f",&lado);

    area = pow(lado,2);
    printf("El area del cuadrado es: %.2f",area);

    getch();
    return 0;
}
