#include "fraccion.h"
#include <stdio.h>
#define pf printf

int main(){
    Fraccion *f1 = NULL;
    Fraccion *f2 = NULL;
    Fraccion *resultado_s = NULL;

    //f1
    f1 = crearFraccion(1, 2);
    pf("La fraccion f1 es: ");
    imprimirFraccion(f1);
    
    //simplificamos f1
    simplificar(f1);
    pf("La fraccion simplificada es: ");
    imprimirFraccion(f1);
    pf("\n");

    //f2
    f2 = crearFraccion(3, 4);
    pf("La fraccion f2 es: ");
    imprimirFraccion(f2);

    //simplificamos f2
    simplificar(f2);
    pf("La fraccion simplificada es: ");
    imprimirFraccion(f2);
    pf("\n");

    //suma de f1 y f2
    resultado_s= sumar(f1, f2);
    pf("El resultado de la suma de f1 y f2es: ");
    imprimirFraccion(resultado_s);
    pf("\n");
    
    //destruir fracciones
    destruirFraccion(f1);
    destruirFraccion(f2);
    destruirFraccion(resultado_s);

    //asignamos nulos a los apuntadores
    f1=NULL;
    f2=NULL;
    resultado_s=NULL;

    //verficamos que los apuntadores son nulos
    pf("Destruimos las fracciones...\n");
    (f1==NULL)? printf("La fraccion f1 es nula\n") : printf("La fraccion f1 no es nula\n");
    (f2==NULL)? printf("La fraccion f2 es nula\n") : printf("La fraccion f2 no es nula\n");
    (resultado_s==NULL)? printf("La fraccion resultado es nulo\n") : printf("La fraccion resultado no es nulo\n");

    return 0; 
}