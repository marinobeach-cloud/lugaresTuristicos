
#include "TArrayProvincias.h"
#include "TListaLugares.h"
 
 
void mostrarLugares(TListaLugares listalugares) {
    while (listalugares != NULL) {
        printf("El nombre del lugar es %s\n", listalugares->dato.nombreLugar);
        printf("El dia que esta cerrado es %s\n", listalugares->dato.dia);
        listalugares = listalugares->sig;
    }
}
 
void mostrarLugar(TListaLugares listalugares, char *lugar) {
    while (listalugares != NULL) {

        if (strcmp(listalugares->dato.nombreLugar, lugar) == 0) {
            printf("El nombre del lugar es %s\n", listalugares->dato.nombreLugar);
            printf("El dia que esta cerrado es %s\n", listalugares->dato.dia);
            return;
        }

        listalugares = listalugares->sig;
    }

    printf("El lugar turistico a buscar %s no existe.\n", lugar);
}
 
void mostrarLugarTuristico(TProvincia *array, int contadorProvincias) {
    char provincia[LONGITUD];
    printf("Introduzca una provincia.\n");
    scanf("%s", provincia);
	
    int posicion = buscarYDevolverProvincia(array, contadorProvincias, provincia);
    if (posicion == -1) {
        printf("La provincia a buscar no existe.\n");
        return;
    }

    //mostrarLugares(array[posicion].listalugares);

    char lugar[LONGITUD];
    printf("Introduce el lugar turistico que desea ver: \n");
    scanf("%s", lugar);
    mostrarLugar(array[posicion].listalugares, lugar);
}
 
void insertarLugarTuristico(TProvincia *array, int contadorProvincias) {
    char provincia[LONGITUD];
    printf("Introduzca una provincia.\n");
    scanf("%s", provincia);
	
    int posicion = buscarYDevolverProvincia(array, contadorProvincias, provincia);
    if (posicion == -1) {
        printf("La provincia a buscar no existe.\n");
        return;
    }

    char lugar[LONGITUD];
    char dia[LONGITUD];

    /*cuando no hay lugares turisticos
    if (array[posicion].listalugares == NULL) {
        array[posicion].listalugares = malloc(sizeof(Tnodo));
        
        if (array[posicion].listalugares == NULL) {
            printf("No se ha podido reservar memoria para el primer lugar turistico.\n");
        }
        printf("Introduzca el nombre del lugar turistico.\n");
        scanf ("%s", lugar);
        printf("Introduzca el dia que esta cerrado.\n");
        scanf ("%s", dia);
        
        strcpy(array[posicion].listalugares->dato.nombreLugar, lugar);
        strcpy(array[posicion].listalugares->dato.dia, dia);
    }*/
    
    //llegar al �ltimo elemento
    TListaLugares lista = array[posicion].listalugares;
    
    while (lista->sig != NULL) {
        lista = lista->sig;
    }

    //lista(sig) -> nodo -> elemento -> dia y lugar

    Telemento elemento;
    TListaLugares nodo = malloc(sizeof(Tnodo));

    printf("Introduzca el nombre del lugar turistico.\n");
    scanf ("%s", lugar);
    printf("Introduzca el dia que esta cerrado.\n");
    scanf ("%s", dia);
    strcpy(elemento.dia, dia);
    strcpy(elemento.nombreLugar, lugar);

    nodo->dato = elemento;
    nodo->sig = NULL;

    lista->sig = nodo;

}
