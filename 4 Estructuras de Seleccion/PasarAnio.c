/*}
Ver si un alumno va a pasar de año o no
Un alumno tiene derecho a reprobar 3 materias para poder pasar de año
Si reprueba 4 materias no puede psar de año y repite
*/

#include<stdio.h>
#include<conio.h>

void cargar(int *mat){
    printf("Ingrese la cantidad de materisa perdidas: ");
    scanf("%i",&*mat);
}

void definir(int *mat){
    if(*mat > 3){
        printf("Tiene que repetir el año");
    }else{
        printf("Pueden pasar al siguiente curso");
    }
}

int main(){

    int *materias;

    cargar(&materias);
    definir(&materias);


    getch();
    return 0;
}
