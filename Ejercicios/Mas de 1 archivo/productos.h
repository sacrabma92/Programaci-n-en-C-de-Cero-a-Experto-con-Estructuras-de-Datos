typedef struct{
    int codigo;
    char descripcion[41];
    float precio;
}tproducto;

#define CANT 4

void cargar(tproducto productos[CANT]);
void imprimir(tproducto productos[CANT]);