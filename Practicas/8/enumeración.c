#include <stdio.h>
/*
 Este programa crea diversas variables tipo enum (enumerador) y
permite visualizar la manera en la que se maneja el tipo de dato.
*/
int main(){
 // declaración de la enumeración
 enum boolean {NO, YES};

 // declaración de una variable tipo enumeración
 enum boolean valorBooleano;
 valorBooleano = YES;

 // Se comprueba que el valor de una enumeración es entero
 printf("%d\n", valorBooleano);

 // Se comprueba que el valor de una enumeración se puede reasignar
 enum diasSemana {LUNES, MARTES, MIERCOLES=5, JUEVES, VIERNES};
 printf("\n%d", LUNES);
 printf("\n%i", MARTES);
 printf("\n%d", MIERCOLES);
 printf("\n%i", JUEVES);
 printf("\n%d\n", VIERNES);

 return 0;
}