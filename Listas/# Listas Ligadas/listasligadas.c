#include <stdio.h>
#include <stdlib.h>

typedef struct tNodo{
    int valor;
    struct tNodo *sig;
}Nodo;

typedef struct tList{
    int tamano;
    Nodo * primerItem;
    Nodo * ultimoItem;
}ListaLigada;

Nodo *getNode(int valor){
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->valor = valor;
    nodo->sig = NULL;
    return nodo;
}

ListaLigada *obtenerNuevaListaLigada(){
    ListaLigada *ll = (ListaLigada *)malloc(sizeof(ListaLigada));
    ll->tamano = 0;
    ll->primerItem = NULL;
    ll->ultimoItem = NULL;
    return ll;
}

// OPERACIONES CRUD

void add(ListaLigada *ll, Nodo *nodo){
    if(ll->primerItem == NULL){
        ll->primerItem = nodo;
    }else{
        ll->ultimoItem->sig = nodo;
        ll->ultimoItem = nodo;
        ll->tamano++;
    }
}

Nodo *read(ListaLigada *ll, unsigned int indice){
    if(ll->tamano && indice < ll->tamano){
        Nodo *exploradorLista = ll->primerItem;
        int i = 0;
        while( i++ < indice){
            exploradorLista = exploradorLista->sig;
            return exploradorLista;
        }
    }
}

void update(ListaLigada *ll, unsigned int indice, int nuevoValor){
    if(ll->tamano && indice < ll->tamano){
        Nodo *exploradorLista = ll->primerItem;
        int i = 0;
        while( i++ < indice ){
            exploradorLista = exploradorLista->sig;
        }
        exploradorLista->valor = nuevoValor;
    }
}

int main(){

    ListaLigada *LISTA = obtenerNuevaListaLigada();
    Nodo *a = getNode(20);
    Nodo *b = getNode(40);
    Nodo *c = getNode(70);

    add(LISTA,a);
    add(LISTA,b);
    add(LISTA,c);
    printf("%d",read(LISTA,1)->valor);

    return 0;
}