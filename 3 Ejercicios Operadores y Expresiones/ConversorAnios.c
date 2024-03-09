/*
Transformar años a meses
Meses a Semanas
Semanas a dias
y dias a horas

1 Año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas
*/

// Pedirle al usuario que digite la cantidad de años con las que se hara la conversion

#include<stdio.h>

int main(){
    int anios = 0, meses = 0, dias = 0, horas = 0, semanas = 0;

    printf("Ingrese la cantidad de anios a convertir: ");
    scanf("%i",&anios);

    meses = anios * 12;
    semanas = meses * 4;
    dias = anios * 365;
    horas = anios * 8760;

    printf("%i Anios tiene %i meses\n",anios, meses);
    printf("%i Anios tiene %i senanas\n",anios, semanas);
    printf("%i Anios tiene %i dias\n",anios, dias);
    printf("%i Anios tiene %i horas\n",anios, horas);

    getch();
    return 0;
}