#include<stdio.h>
int main()
{
    //Mensaje de Bienvenida
    printf("\n\n\t\t\tPrograma de edades :)\n\n");

    //Variables a utilizar
    int edad;

    //Solicitar edad
    printf("Ingresa tu edad: ");
    scanf("%d",&edad);

    //Implementación del if-else
    if (edad>=18)
    {
        printf("Eres mayor de edad!!!\n");
    }
    else
    {
        printf("Eres menor de edad!!!\n");
    }
    
    return 0;
}