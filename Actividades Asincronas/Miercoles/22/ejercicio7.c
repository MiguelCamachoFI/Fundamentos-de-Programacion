#include<stdio.h>
int main()
{
    int n,i,f;
    f=1;
    //apuntador a archivo
    FILE *a;
    a=fopen("factorial.txt","w");
    printf("Ingresa un número entero: \n");
    scanf("%d",&n);

    if (n<0)
    {
        printf("No se puede calcular factorial de números negativos\n");
    }
    else
    {
        for (int i = 1; i<=n; ++i)
        {
            fprintf(a,"%d * %d = ",f,i);
            f=f*i;
            fprintf(a,"%d\n",f);
        }
        
        printf("El factorial de %d es: %d\n",n,f);
        fclose(a);
    }
    return 0;
}
