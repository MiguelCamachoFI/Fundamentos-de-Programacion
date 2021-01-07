#include <stdio.h>
/*
 Este programa genera un arreglo unidimensional de 5 elementos y los
 accede a cada elemento del arreglo a través de un ciclo while.
*/
int main (){
    #define TAMANO 5
    int lista[TAMANO] = {10, 8, 5, 8, 7};

    int indice = 0;

    printf("\tLista\n");
    while (indice < 5 ){
    printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
    indice += 1; // análogo a indice = indice + 1;
    }

    printf("\n");

    return 0;
}