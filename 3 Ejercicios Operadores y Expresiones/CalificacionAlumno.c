/* Un alumno desea saber cual sera su calificacion final en la
materia de Algoritmos.
Dicha calificacion se compone de los siguientes porcentajes:

55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final.
15% de la calificación de un trabajo final.*/

#include<stdio.h>
#include<conio.h>

int main(){

    float p1,p2,p3, promedio_parcial, examen_final, trabajo_final;
    float porcentaje_parciales, porcentaje_examenes,porcentaje_trabajo_final, calificacion_final;

    printf("Escribe la calificaciones de los examenes parciales\n");
    printf("Ingresa la nota del parcial 1:");
    scanf("%f",&p1);
    printf("Ingresa la nota del parcial 2:");
    scanf("%f",&p2);
    printf("Ingresa la nota del parcial 3:");
    scanf("%f",&p3);

    promedio_parcial = (p1 + p2 + p3) / 3;

    porcentaje_parciales = promedio_parcial * 0.55;
    porcentaje_examenes = promedio_parcial * 0.30;
    porcentaje_trabajo_final = promedio_parcial * 0.15;
    calificacion_final = porcentaje_parciales + porcentaje_examenes + porcentaje_trabajo_final;

    printf("\nLa calificacion final es: %.2f",calificacion_final);

    getch();
    return 0;
}