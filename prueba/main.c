//Maciel_Kevin_42144635
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int vec[] = {1,1,1,2,3,4,1,5};
    int tam = sizeof(vec)/sizeof(int);
    int i;

    tLista lista;
    crearLista(&lista);

    //for(i = vec; i < (vec + tam); i++);
    //{
    //    ponerAlFinal(&lista,*i,sizeof(int));
   // }
    //cargarLista(&lista,vec);

    ponerAlFinal(&lista,&vec[0],sizeof(int));
    ponerAlFinal(&lista,&vec[1],sizeof(int));
    ponerAlFinal(&lista,&vec[2],sizeof(int));
    ponerAlFinal(&lista,&vec[3],sizeof(int));
    ponerAlFinal(&lista,&vec[4],sizeof(int));
    ponerAlFinal(&lista,&vec[5],sizeof(int));
    ponerAlFinal(&lista,&vec[6],sizeof(int));
    ponerAlFinal(&lista,&vec[7],sizeof(int));

    mostarListaRecInverso(&lista,mostrar,condicionEnteroIgualUno);

    return 0;
}
