
#include "TListaLugares.h"
#include "TArrayProvincias.h"
 
 
void mostrarProvincias (TProvincia *array, int contadorProvincias) {
	
    int contador = 0;
    
    for(contador = 0; contador < contadorProvincias; contador++) {
    	
        printf("Nombre de la provincia: %s, comunidad autonoma: %s\n", array[contador].nombreProvincia, array[contador].nombreComunidad);
        if (array[contador].listalugares != NULL) {
            mostrarLugares(array[contador].listalugares);
        }
        
    }
    system ("PAUSE");
    system ("CLS");

}
 
void mostrarUnaProvincia(TProvincia *array, int contadorProvincias) {
    int contador = 0;
    char provincia[LONGITUD];
    int buscado = 0;
    printf("Dame el nombre de la provincia:\n");
    scanf("%s", provincia);
 
    for(contador = 0; contador < contadorProvincias && buscado == 0; contador++) {
    	
        if (strcmp (provincia, array[contador].nombreProvincia) == 0) {
            printf("Nombre de la provincia: %s, comunidad autonoma: %s\n", array[contador].nombreProvincia, array[contador].nombreComunidad);
            buscado = 999;
            
            mostrarLugares(array[contador].listalugares);
        }        
    }
    if(buscado == 0){
        printf("La provincia %s no existe.\n", provincia);

    }

}
 
 
int preguntarNombreProvincia (TProvincia *array, int numeroProvincias, int contadorProvincias){
    char provincia[LONGITUD];
    char ccaa[LONGITUD];
    int contador;
    int encontrado = 0;

    if (contadorProvincias < numeroProvincias) {
 
        printf("Dame el nombre de la provincia:\n");
        scanf("%s", provincia);
  		encontrado = buscarYDevolverProvincia(array, numeroProvincias, provincia);

        if (encontrado != -1) {
            printf("La provincia esta repetida, no se ha guardado.\n");
	    }

    	else {

            strcpy(array[contadorProvincias].nombreProvincia, provincia);

            printf("Dame el nombre de la CCAA:\n");
            scanf("%s", ccaa);
            system ("CLS");
            printf("Queda registrada la provincia y ccaa\n");
            system("PAUSE");
            system ("CLS");


            strcpy(array[contadorProvincias].nombreComunidad, ccaa);
            array[contadorProvincias].listalugares = NULL;

            ++contadorProvincias;

       } 

        return contadorProvincias;
    }

    printf("El array esta lleno.\n");
    return contadorProvincias;
 
}
 
int funcionInicializacion(TProvincia *array, int contadorProvincias) {

    strcpy(array[contadorProvincias].nombreProvincia, "Avila");    
    strcpy(array[contadorProvincias].nombreComunidad, "Castilla y Leon");
    array[contadorProvincias].listalugares = malloc(sizeof(Tnodo));
        
    if (array[contadorProvincias].listalugares == NULL) {
        printf("No se ha podido reservar memoria para el primer lugar turistico.\n");
    }
    strcpy(array[contadorProvincias].listalugares->dato.nombreLugar, "La muralla");
    strcpy(array[contadorProvincias].listalugares->dato.dia, "lunes");
    array[contadorProvincias].listalugares->sig = NULL;
    
    ++contadorProvincias;


    strcpy(array[contadorProvincias].nombreProvincia, "Madrid");    
    strcpy(array[contadorProvincias].nombreComunidad, "Madrid");
    array[contadorProvincias].listalugares = malloc(sizeof(Tnodo));
        
    if (array[contadorProvincias].listalugares == NULL) {
        printf("No se ha podido reservar memoria para el primer lugar turistico.\n");
    }
    strcpy(array[contadorProvincias].listalugares->dato.nombreLugar, "La Palacio Real");
    strcpy(array[contadorProvincias].listalugares->dato.dia, "martes");
    array[contadorProvincias].listalugares->sig = NULL;
    
    ++contadorProvincias;


    strcpy(array[contadorProvincias].nombreProvincia, "Almeria");    
    strcpy(array[contadorProvincias].nombreComunidad, "Andalucia");
    array[contadorProvincias].listalugares = malloc(sizeof(Tnodo));
        
    if (array[contadorProvincias].listalugares == NULL) {
        printf("No se ha podido reservar memoria para el primer lugar turistico.\n");
    }
    strcpy(array[contadorProvincias].listalugares->dato.nombreLugar, "Parque natural Cabo de Gata");
    strcpy(array[contadorProvincias].listalugares->dato.dia, "jueves");
    array[contadorProvincias].listalugares->sig = NULL;
    
    ++contadorProvincias;


    strcpy(array[contadorProvincias].nombreProvincia, "Lugo");    
    strcpy(array[contadorProvincias].nombreComunidad, "Galicia");
    array[contadorProvincias].listalugares = malloc(sizeof(Tnodo));
        
    if (array[contadorProvincias].listalugares == NULL) {
        printf("No se ha podido reservar memoria para el primer lugar turistico.\n");
    }
    strcpy(array[contadorProvincias].listalugares->dato.nombreLugar, "La Puerta de Santiago");
    strcpy(array[contadorProvincias].listalugares->dato.dia, "viernes");
    array[contadorProvincias].listalugares->sig = NULL;
    
    ++contadorProvincias;


    strcpy(array[contadorProvincias].nombreProvincia, "Segovia");    
    strcpy(array[contadorProvincias].nombreComunidad, "Castilla y Leon");
    array[contadorProvincias].listalugares = malloc(sizeof(Tnodo));
        
    if (array[contadorProvincias].listalugares == NULL) {
        printf("No se ha podido reservar memoria para el primer lugar turistico.\n");
    }
    strcpy(array[contadorProvincias].listalugares->dato.nombreLugar, "El Acueducto");
    strcpy(array[contadorProvincias].listalugares->dato.dia, "lunes");
    array[contadorProvincias].listalugares->sig = NULL;
    
    ++contadorProvincias;


    strcpy(array[contadorProvincias].nombreProvincia, "Murcia");    
    strcpy(array[contadorProvincias].nombreComunidad, "Murcia");
    array[contadorProvincias].listalugares = malloc(sizeof(Tnodo));
        
    if (array[contadorProvincias].listalugares == NULL) {
        printf("No se ha podido reservar memoria para el primer lugar turistico.\n");
    }
    strcpy(array[contadorProvincias].listalugares->dato.nombreLugar, "La Catedral");
    strcpy(array[contadorProvincias].listalugares->dato.dia, "martes");
    array[contadorProvincias].listalugares->sig = NULL;
    
    ++contadorProvincias;

    system ("PAUSE");
    system ("CLS");

    return contadorProvincias;
 
}
 
TProvincia* preguntarNumeroProvincias(int* numeroProvincias) {

    TProvincia* array;

    do{
        printf("Cuantas provincias guardamos?\n");
        scanf("%d", numeroProvincias);

        if (*numeroProvincias < NUM_MIN_PROV){
            printf("El minimo de provincias es %d, repetir de nuevo.\n", NUM_MIN_PROV);
        }

    } while (*numeroProvincias < NUM_MIN_PROV);

    array = (TProvincia*) malloc(*numeroProvincias*sizeof(TProvincia));


    return array;
}
 
void mostrarMenu (int contadorProvincias, TProvincia *array, int numeroProvincias){
    int opcion;
    system ("CLS");
    do {

        printf("\n\n\t%d) Introducir una provincia.\n", INTRODUCIR);
        printf("\n\n\t%d) Mostrar datos de una provincia.\n", MOSTRAR);
        printf("\n\n\t%d) Informe total.\n", INFORME);
        printf("\n\n\t%d) Mostrar lugar tur�stico.\n", LUGAR);
        printf("\n\n\t%d) Insertar lugar tur�stico.\n", INSERTAR);
        printf("\n\n\t%d) Salir.\n", SALIR);

        scanf("%d", &opcion);
        system ("CLS");


        if(opcion < 0){
            printf("los numeros negativos no estan aceptados.\n");
        system ("PAUSE");
        }
        
        
        
        else if(opcion > SALIR){
            printf("los numeros mayores de %d no son validos.\n", SALIR);
        }


        switch (opcion) {
            case INTRODUCIR:
                contadorProvincias = preguntarNombreProvincia(array, numeroProvincias, contadorProvincias);
                break;
            case MOSTRAR:
                if (contadorProvincias == 0) {
                    printf("No se puede mostrar ninguna provincia dado que no hay provincias\n");
                }
                else {
               		mostrarUnaProvincia(array, contadorProvincias);	
				}            
                break;
            case INFORME:
                if (contadorProvincias == 0) {
                    printf("No se puede mostrar ninguna provincia dado que no hay provincias\n");
                }
                else {
                	mostrarProvincias(array, contadorProvincias);
                }             
                break;
            case LUGAR:
                if (contadorProvincias == 0) {
                    printf("No se puede mostrar ninguna provincia dado que no hay provincias\n");                
                }
                else {
                	mostrarLugarTuristico(array, contadorProvincias);
				}                
                break;
            case INSERTAR:
                if (contadorProvincias == 0) {
                    printf("No se puede mostrar ninguna provincia dado que no hay provincias\n");
				}
				else {
					insertarLugarTuristico(array, contadorProvincias);
				}             
                break;
        }

    } while (opcion != SALIR);
}
 
/*int buscarProvincia (TProvincia *array, int numeroProvincias, char* provincia) {

    int contador = 0;
    int encontrado = 0;
 
    for (contador = 0; contador < numeroProvincias && encontrado == 0; contador++){
        if (strcmp (provincia, array[contador].nombreProvincia) == 0) {

            encontrado = 1;

        } 
    }
 
    return encontrado;    
}*/
 
int buscarYDevolverProvincia (TProvincia *array, int numeroProvincias, char* provincia) {

    int contador = 0;

    for (contador = 0; contador < numeroProvincias; contador++){
        if (strcmp (provincia, array[contador].nombreProvincia) == 0) {

            return contador;

        } 
    }

    return -1;    
}
