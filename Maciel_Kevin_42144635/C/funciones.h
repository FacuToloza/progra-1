#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//Maciel_Kevin_42144635
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct sNodo
{
    void *info;
    unsigned tamInfo;
    struct sNodo *sig;
}tNodo;

typedef tNodo *tLista;

void crearLista(tLista *p);
int ponerAlFinal(tLista *p, void *d, unsigned cantBytes);
int mostarListaRecInverso(const tLista *p, void (*mostrar)(const void*), int(*condicion)(const void *d));

void mostrar(const void*);
int condicionEnteroIgualUno(const void *d);
void cargarLista(tLista *p, int vec[]);


#endif // FUNCIONES_H_INCLUDED
