#include "pelicula.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Pelicula *crearPelicula(char *nombre, char *genero, int duracion){
    Pelicula *p= (Pelicula*)malloc(sizeof(Pelicula));
    strcpy(p->nombre, nombre);
    strcpy(p->genero, genero);
    p->duracion= duracion;
    p->director[0]='\0'; //director vacío para que al imprimir no imprima basura
    return p;
}

void imprimir(const Pelicula *p){
    if(!p) return;
    printf("\nNombre: %s\n", p->nombre);
    printf("Genero: %s\n", p->genero);
    printf("Duracion: %d\n", p->duracion);
   
    if(p->director[0] != '\0'){
        printf("Director: %s\n", p->director);
    }
    printf("\n");
}

void cambiarGenero(Pelicula *p, char *genero){
    if(!p) return;
    strcpy(p->genero, genero);
}

void agregarDirector(Pelicula *p, char *director){
    if(!p) return;
    strcpy(p->director, director);
}

void destruir(Pelicula* p){
    if(!p) return;
    free(p);
}