#include<stdio.h>
float main()
{
    printf("bienvenido\n\n");
    //Declarar variables
    float a,b,s,r,mu,d;
    int mo,x,y;
    //Solicitar variables
    printf("Dame 2 números seprados por espacios:");
    scanf("%f %f",&a,&b);
    //Suma
    s=a+b;
    printf("La suma de %f y %f es: %f \n",a,b,s);
    //Resta
    r=a-b;
    printf("La resta de %f y %f es: %F \n",a,b,r);
    //Multiplicación
    mu=a*b;
    printf("La multiplicación de %f y %f es: %f \n",a,b,mu);
    //División
    d=a/b;
    if (b==0)
    {
        printf("la división es indeterminada\n");
    }
    else
    {
        printf("La división de %f y %f es: %f \n",a,b,d);
    }
    //modulo o residuo
    x=a;
    y=b;
    mo = x % y;
    printf("El módulo o residuo de %d y %d es: %d \n", x, y, mo);
    return 0;
}
