
#ifndef TARRAYPROVINCIAS_H 
#define TARRAYPROVINCIAS_H 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TListaLugares.h"
 
#define LONGITUD 30
 
typedef struct Provincia {
    char nombreProvincia[LONGITUD];
    char nombreComunidad[LONGITUD];
    TListaLugares listalugares;
} TProvincia;
 
 /*Preguntamos al usuario que nos diga n� de provincias y reservamos la memoria necesaria.*/ 
TProvincia* preguntarNumeroProvincias(int* numeroProvincias);
/*Introduce una nueva provincia y comunidad si no est�n repetidas y el array no est� lleno*/
int preguntarNombreProvincia (TProvincia *array, int numeroProvincias, int contadorProvincias);
/*Recorremos el array y mostramos cada comunidad y provincia*/
void mostrarProvincias (TProvincia *array, int contadorProvincias);
/*se inicializa el array con ciertas provincias y comunidades*/
int funcionInicializacion(TProvincia *array, int contadorProvincias);
/*Muestra el men� del programa*/
void mostrarMenu (int contadorProvincias, TProvincia *array, int numeroProvincias);
/*Comprobamos si la provincia que le hemos pedido al usuario est� dentro de nuestro array, si lo est� mostramos todos sus datos*/
void mostrarUnaProvincia(TProvincia *array, int contadorProvincias);
/*Buscamos en nuestro array una provincia, si existe devolvemos un 1 y si no un 0*/
//int buscarProvincia (TProvincia *array, int numeroProvincias, char* provincia);
/*Pedimos al usuario el nombre de una provincia y si existe devolvemos su posici�n y si no, devolvemos -1*/
int buscarYDevolverProvincia (TProvincia *array, int numeroProvincias, char* provincia);
 
#define NUM_MIN_PROV 25
 
#define INTRODUCIR 1
#define MOSTRAR 2
#define INFORME 3
#define LUGAR 4
#define INSERTAR 5
#define SALIR 6
 
#endif 
