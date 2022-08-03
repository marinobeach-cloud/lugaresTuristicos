
#include <stdio.h>
#include <stdlib.h>
#include "TArrayProvincias.h"
#include "TListaLugares.h"
 
 /*Se reserva memoria para un array que guardar� las provincias. Tambien, se inicializa el array con ciertas provincias.
  Despu�s, se llama al men� princpal. Y por �ltimo, se libera la memoria que hemos utilizado*/

int main(){
    int *numeroProvincias = malloc(sizeof(int));    
    TProvincia* array;
    int contadorProvincias = 0;

    array = preguntarNumeroProvincias(numeroProvincias);
    if (array == NULL) {
            printf("No se ha podido dar memoria a array.\n");
    }


    contadorProvincias = funcionInicializacion(array, contadorProvincias);

    mostrarMenu(contadorProvincias, array, *numeroProvincias);
    int i = 0;
    for (i = 0; i < contadorProvincias; ++i) {
        //primero liberar la lista lugares turisticos
        TListaLugares lista;
        while (array[i].listalugares != NULL) {
            lista = array[i].listalugares;
            array[i].listalugares = array[i].listalugares->sig;
            free(lista);
        }  
    }

        //liberar la posici�n del array
    free(array);
    return EXIT_SUCCESS;

}
