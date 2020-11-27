#include<stdio.h>

int main()
{
    printf("\n\n\t\tCalculadora de áreas de triángulos\n\n\n");
    int a, b;
    float area;
    printf("\n\nIngrese el valor de la altura del triángulo: ");
    scanf("%d", &a);
    printf("\n\nIngrese el valor de la base del tríangulo: ");
    scanf("%d", &b);

    area = (a*b)/(float)2;
    printf("\n\n\nEl área del tríangulo es: %f\n", area);

    return 0;
}