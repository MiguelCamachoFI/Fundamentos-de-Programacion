#include<stdio.h>
int main()
{
    printf("bienvenido\n\n");
    //Declarar variables
    int a,b,s,r,mu,d,mo;
    //Solicitar variables
    printf("Dame 2 números seprados por espacios:");
    scanf("%i %i",&a,&b);
    //Suma
    s=a+b;
    printf("La suma de %d y %d es: %d \n",a,b,s);
    //Resta
    r=a-b;
    printf("La resta de %d y %d es: %d \n",a,b,r);
    //Multiplicación
    mu=a*b;
    printf("La multiplicación de %d y %d es: %d \n",a,b,mu);
    //División
    d=a/b;
    printf("La división de %d y %d es: %d \n",a,b,d);
    //modulo o residuo
    mo=a%b;
    printf("El módulo o residuo de %d y %d es: %d \n",a,b,mo);
    return 0;
}