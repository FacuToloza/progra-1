#include <stdio.h>

void mostrarLetras(char cInicio, char cFin)
{
    char c;
    for(c=cInicio;c<=cFin;c++)
    {
        printf("| %c %d | %c %d \n",c, c, c+32, c+32);
    }
}
