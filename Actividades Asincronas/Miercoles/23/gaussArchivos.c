#include<stdio.h>
int main()
{
    //Declarar variables
    int n,res;
    //apuntador a archivo
    FILE *a;
    a=fopen("resultadosGauss.txt","w");
    //Mensaje de bienvenida
    printf("\n\n\t\t\tSuma de los primeros n números\n\n");

    //Solicitar el número de elementos a sumar
    printf("¿Cuántos números deseas sumar?\n");
    scanf("%d",&n);

    //Sumar los n números
    res=0;
    for (int i = 1; i<=n; i++)
    {
        fprintf(a,"%d + %d = ",res,i);
        res=res+i;
        fprintf(a,"%d\n",res);
    }
    
    /*
    n=5
    i=6
    res=15
    res=10+5=15
    */

    //Mostrar el resultado
    printf("La suma de los primeros %d números es: %d\n",n,res);
    fclose(a);
    return 0;
}
