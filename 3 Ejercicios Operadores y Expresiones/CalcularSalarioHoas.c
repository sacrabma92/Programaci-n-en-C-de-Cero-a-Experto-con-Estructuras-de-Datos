
/*
Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo    
*/
#include<stdio.h>
#include<conio.h>

int main(){
    int horas_trabajadas = 0, valor_hora = 0;
    float salario = 0;

    printf("Ingrese las horas trabajadas: ");
    scanf("%i",&horas_trabajadas);

    printf("Ingrese valor hora: ");
    scanf("%i",&valor_hora);

    salario = horas_trabajadas * valor_hora;

    printf("El valor a recibir es de: %.1f",salario);



    getch();
    return 0;
}