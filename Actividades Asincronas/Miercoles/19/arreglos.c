#include<stdio.h>
int main()
{
    int au [3];
    for (int i = 0; i < 3; i++)
    {
        printf("Calificaci%cn %d: ",162,i+1);
        scanf("%d",&au[i]);
    }

    printf("Calificaciones capturadas :)\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t",au[i]);
    }
    printf("\n");

    int a=0;
    for (int i = 0; i < 3; i++)
    {
        a=a+au[i];
    }
    printf("El promedio es: %f\n",(a/3.0));
    return 0;
}