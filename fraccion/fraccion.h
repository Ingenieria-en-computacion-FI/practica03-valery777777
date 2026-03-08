#ifndef __FRACCION_H__
#define __FRACCION_H__

struct fraccion{
    int numerador;
    int denominador;
};

typedef struct fraccion Fraccion;

Fraccion *crearFraccion(int, int);
void simplificar(Fraccion*);
Fraccion *sumar(const Fraccion*, const Fraccion*);
void imprimirFraccion(const Fraccion*);
void destruirFraccion(Fraccion*);
#endif