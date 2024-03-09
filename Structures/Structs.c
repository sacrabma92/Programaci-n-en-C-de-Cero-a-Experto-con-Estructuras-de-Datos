/*

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    // Definimos un nuevo tipo llamado "MiTipoDeDato"
    // Esto solo es otra manera de declarar un entero
    typedef int MiTipoDeDato;

    //Ahora podemos crear varialbes del tipo "MiTipoDeDato"
    MiTipoDeDato Variable1;
    // Pero tambien podemos seguir usando int
    int Variable2;
    printf("Escribre 2 enteros\n");
    scanf("%d %i",&Variable1, &Variable2);

    printf("\nNumeros digitados: %i %d",Variable1, Variable2);




    getch();
    return 0;
}