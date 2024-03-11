/*
Hacer un programa que pida el total de kilómetros recorridos, el precio de la gasolina (por litro), el dinero de gasolina gastado en el viaje y el tiempo que se ha tardado (en horas y minutos), y que calcule: 
• Consumo de gasolina (en litros y pesetas) por cada cien kilómetros. 
• Consumo de gasolina (en litros y pesetas) por cada kilómetro. 
• Velocidad media (en km/h y m/s
/****************************************************************/ 
/* Objetivo: Control del consumo de gasolina y velocidad media. */ 
/* Entrada : Km. recorridos. Precio gasolina, dinero gastado y Tiempo empleado en el viaje. */ 
/* Salida : Consumo de gasolina cada km. y cada 100 km., y Velocidad media en el viaje. 
****************************************************************/

#include<stdio.h>
#include<conio.h>


int main(){

    float km,                   // Kilometros recorridos
        preciolitro,            //Precio por litro de gasolina
        litrosgastados,         //Litros consumidos en el viaje
        litros_km,              //Litros consumidos por cada km
        dinero_km;              // Dinero gastado por cada km
    int horas, minutos, dinero;

    puts("  -*****-     LA CARRETERA    -*****-\n");

    printf("- Total de km. recorridos: "); scanf("%f",&km);
    printf("- Tiempo tardado: HORAS: "); scanf("%i",horas);
    printf("                  MINUTOS: "); scanf("%i",&minutos);

    minutos = 60 * horas + minutos;

    printf("- Precio por litro de gasolina: "); scanf("%f",&preciolitro);
    printf("- Dinero gastado en gasolina: "); scanf("%i",&dinero);
    litrosgastados = dinero / preciolitro;

    puts("\n        ****** RESULTADOS       ");

    printf("- Velocidad media           : %f km/h.\n",(km/horas)*60);
    printf("- Total litros gastados: %f litros.\n",litrosgastados);
    printf("- Consumo de gasolina cada kilometro: %f litros.\n", litros_km = litrosgastados/km);
    printf("  %f pesos.\n",dinero_km = litros_km * preciolitro );
    printf("- Consumo de gasolina cada 100 kms: %f litros\n",litros_km*100);
    printf("    %f",dinero_km*100);


    getch();
    return 0;
}