#define TAM 10
int cargar(){
    int t;
    printf("Ingresa el numero de la tabla a mostrar: ");
    scanf("%i",&t);
    return t;
}


void imprimir(int dato){
    for(int i = 0; i <= TAM; i++){
        printf("%i x %i = %i\n",dato, i, i * dato);
    }
}
