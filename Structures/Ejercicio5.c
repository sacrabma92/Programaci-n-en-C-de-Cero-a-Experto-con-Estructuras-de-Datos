/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

struct punto{
    int x;
    int y;
};

struct punto cargar(){

    struct punto p;

    printf("Ingrese el eje X: ");
    scanf("%i",&p.x);

    printf("Ingrese el eje Y: ");
    scanf("%i",&p.y);

    return p;
}

void imprimir(struct punto p){
    if(p.x > 0 && p.y > 0){
        printf("1 Cuadrante");
    }else{
        if(p.x < 0 && p.y > 0){
            printf("2 Cuadrante");
        }else{
            if(p.x < 0 && p.y < 0){
                printf("3 Cuadrante");
            }else{
                if(p.y < 0 && p.x > 0){
                    printf("4 Cuadrante");      
                }

            }
        }
    }
}

int main(){

    struct punto p1,p2,p3;

    p1 = cargar();
    // p2 = cargar();
    // p3 = cargar();

    imprimir(p1);


    getch();
    return 0;
}