#include<stdio.h>
int main()
{
    int n,i,f;
    f=1;
    i=1;
    printf("Ingresa un número entero: \n");
    scanf("%d",&n);

    if (n<0)
    {
        printf("No se puede calcular factorial de números negativos\n");
    }
    else
    {
        while (i<=n)
        {
            f=f*i;
            ++i;
        }
        
        printf("El factorial de %d es: %d\n",n,f);
    }
    
    return 0;
}