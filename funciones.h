#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <math.h>

float potencia(float base, float exponente)
{
    return pow(base, exponente);
}

float raiz(float numero, float indice)
{
    return pow(numero, 1.0, indice);
}

#endif // FUNCIONES_H_INCLUDED
