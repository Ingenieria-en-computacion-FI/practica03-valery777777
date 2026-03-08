#ifndef __PELICULA_H__
#define __PELICULA_H__

struct pelicula{
    char nombre[100];
    char genero [20];
    int duracion; //[min]
    char director[100];
};

typedef struct pelicula Pelicula;

Pelicula *crearPelicula(char *nombre, char *genero, int duracion);
void imprimir(const Pelicula*);
void cambiarGenero(Pelicula*, char*);
void agregarDirector(Pelicula*, char*);
void destruir(Pelicula*);
#endif