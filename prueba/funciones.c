#include "funciones.h"
//Maciel_Kevin_42144635
void mostrar(const void *d )
{
    const int *aux = (int*)d;
    printf("%d", *aux);
}
int condicionEnteroIgualUno(const void *d)
{
    int *aux = (int*)d;
    return *aux == 1;
}

void crearLista(tLista *p)
{
    *p = NULL;
}
int ponerAlFinal(tLista *p, void *d, unsigned cantBytes)
{
    tNodo *nue;

    if( ((nue = (tNodo*)malloc(sizeof(tNodo)) )== NULL) ||
       (nue->info = malloc(cantBytes)) == NULL )
    {
        free(nue);
        return 0;
    }

    while(*p)
        p = &(*p)->sig;

    memcpy(nue->info, d, cantBytes);
    nue->tamInfo = cantBytes;
    nue->sig = NULL;
    *p = nue;
    return 1;
}
int mostarListaRecInverso(const tLista *p,
                          void (*mostrar)(const void*),
                          int(*condicion)(const void *d))
{
    if(!*p)
        return 0;

    mostarListaRecInverso(&(*p)->sig,mostrar, condicion);

    if( condicion((*p)->info) )
    {
        mostrar((*p)->info);
    }
    return 1;
}

void cargarLista(tLista *p, int vec[])
{
    int i;
    for(i = vec; i < vec+ 8; i++);
    {
       ponerAlFinal(p,vec,sizeof(int));
    }
}
