#include<stdio.h>
int main()
{
    int ab[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Calificaci%cn %d del alumno %d: ",162,j+1,i+1);
            scanf("%d",&ab[i][j]);
        }
    }
    
    printf("Calificaciones capturadas :)\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",ab[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    float p[3];
    int a=0;
    for (int i = 0; i < 3; i++)
    {
        a=0;
        for (int j = 0; j < 3; j++)
        {
            a=a+ab[i][j];
        }
        p[i]=a/3.0;
        printf("\nel promedio del alumno %d es: %f",i+1,p[i]);
    }
    a=0;
    for (int i = 0; i < 3; i++)
    {
        a=a+p[i];
    }
    printf("\nEl promedo general del grupo es: %f\n",(a/3.0));
    return 0;
}