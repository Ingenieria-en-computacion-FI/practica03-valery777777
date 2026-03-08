#include "Nodo.h"
#include <stdio.h>

int main(){
    Nodo *n;
    n = crearNodo(2);
    printf("El valor del nodo es: %d\n", obtenerValor(n));
    asignarValor(n, 7);
    printf("El valor del nodo es: %d\n", obtenerValor(n));
    destruirNodo(n);
    n=NULL;
    (n==NULL)? printf("El nodo es nulo\n") : printf("El nodo no es nulo\n");
    return 0; 
}