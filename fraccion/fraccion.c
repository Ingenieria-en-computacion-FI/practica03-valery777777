#include "fraccion.h"
#include <stdlib.h>
#include <stdio.h>

Fraccion *crearFraccion(int numerador, int denominador){
    if(denominador == 0) return NULL; //no podemos dividir entre 0
    Fraccion *f = (Fraccion*)malloc(sizeof(Fraccion));
    f->numerador = numerador;
    f->denominador = denominador;
    return f;
}

void simplificar(Fraccion *f){
    if(!f) return;

    int num_orig= f->numerador;
    int den_original= f-> denominador;

    int p= num_orig, q= den_original, r;

    while(q!=0){
        r=p%q;
        p=q;
        q=r;
    }
    f-> numerador = num_orig/p;
    f-> denominador = den_original/p;
}

Fraccion *sumar(const Fraccion *f1, const Fraccion *f2){
    if(!f1 || !f2) return NULL;
    Fraccion *resultado = crearFraccion(f1->numerador * f2->denominador + f2-> numerador * f1->denominador, f1->denominador * f2->denominador);
    //método mariposa para sumar las fracciones 
    simplificar(resultado);
    return resultado;
}

void imprimirFraccion(const Fraccion *f){
    if(!f) return;
    printf("%d/%d\n", f->numerador, f->denominador);
}

void destruirFraccion(Fraccion* f){
    if(!f) return;
    free(f);
};