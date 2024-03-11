/*}


*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char palabra[50];
    int vocales = 0;
    int consontantes = 0;

    printf("Ingrese una palabra en minuscula: ");
    gets(palabra);

    for(int i = 0; i < strlen(palabra); i++){
        switch (palabra[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vocales++;
            break;
        default:
            consontantes++;
            break;
        }
    }

    printf("La cantidad de vocales que tiene la palabra es: %i\n",vocales);
    printf("La cantidad de consonantes que tiene la palabra es %i\n",consontantes);

    getch();
    return 0;
}