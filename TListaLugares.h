
#ifndef TLISTALUGARES_H 
#define TLISTALUGARES_H
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "TListaLugares.h"
 
#define LONGITUD 30
 

typedef struct {
    char nombreLugar[LONGITUD];
    char dia[LONGITUD];
} Telemento;
 
 
typedef struct Nodo
{ 
    Telemento dato;
    struct Nodo *sig;
} Tnodo;
 
typedef Tnodo *TListaLugares;
 
void mostrarLugares(TListaLugares listalugares);
void mostrarLugar(TListaLugares listalugares, char *lugar);
//void mostrarLugarTuristico(TProvincia *array, int contadorProvincias);
//void insertarLugarTuristico(TProvincia *array, int contadorProvincias);
 
#endif
