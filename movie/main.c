#include "pelicula.h"
#include <stdio.h>
#define pf printf

int main()
{
    Pelicula *p;
    p= crearPelicula("Mulan", "LiveAction", 88);
    pf("Los datos de la pelicula son:\n");
    imprimir(p);

    pf("Cambiamos el genero: \n");
    cambiarGenero(p, "Animacion");
    imprimir(p);

    pf("Agregamos el director de la pelicula: \n");
    agregarDirector(p,"Tony Bancroft y Barry Cook");
    imprimir(p);

    pf("Destruimos la peliula... \n");
    destruir(p);
    p=NULL;
    (p==NULL)? pf("La pelicula ahora es nula\n") : pf("La pelicula no es nula\n");
    return 0;
}
