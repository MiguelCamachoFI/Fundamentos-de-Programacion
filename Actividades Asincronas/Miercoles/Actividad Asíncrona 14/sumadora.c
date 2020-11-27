#include<stdio.h>
int main()
{
    //Mensaje de bienvenida
    printf("Bienvenido a mi sumadora :)\n\n");

    //Declarar variables
    int n1,n2,res;

    //Solicitar variables
    printf("Dame 2 números separados por comas: ");
    scanf("%i,%i",&n1,&n2);

    //Realizar la suma
    res=n1+n2;
    printf("La suma de %d y %d es: %d \n",n1,n2,res);
    
    return 0;
}