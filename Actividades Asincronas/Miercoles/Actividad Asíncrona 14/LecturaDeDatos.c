#include<stdio.h>
int main()
{
    //Declarar variables
    int a,b;

    //Solicitar datos separados por enters
    printf("Dame 2 valores separados por enters: ");
    scanf("%d%d",&a,&b);
    printf("Los datos que ingresaste son: %d y %d \n",a,b);

    //Solicitar datos separados por espacios
    printf("Dame 2 valores separados por espacios: ");
    scanf("%d %d",&a,&b);
    printf("Los datos que ingresaste son: %d y %d \n",a,b);

    //Solicitar datos separados por comas
    printf("Dame 2 valores separados por comas: ");
    scanf("%d,%d",&a,&b);
    printf("Los datos que ingresaste son: %d y %d \n",a,b);

    return 0;
}