#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    printf("Ingrese %d productos de la tienda: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf("Total de productos de la tienda = %d\n", sum);

    return 0;
}