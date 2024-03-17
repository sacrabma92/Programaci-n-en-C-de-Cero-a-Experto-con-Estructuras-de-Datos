
#include"operaciones.h"

int main(){
    int *p_a, *p_b, a=54, b=21, respuestasuma, respuestaresta;

    p_a = &a;
    p_b = &b;

    respuestasuma = suma(p_a, p_b);
    respuestaresta = resta(p_a, p_b);

    printf("El valor de la suma es: %i\n",respuestasuma);
    printf("El valor de la resta es: %i\n",respuestaresta);

    getch();
    return 0;
}