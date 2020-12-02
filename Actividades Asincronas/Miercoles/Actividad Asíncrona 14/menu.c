#include<stdio.h>
int main()
{
    //Mensaje de bienvenida
    printf("\n\n\t\t\tBienvenidos a nuestra calculadora :)'n\n");

    //Variables a utilizar
    int op,n1,n2,res;
    
    //Mostrar menú
    printf("1) Suma\n2) Resta\n3) Multiplicación\n4) División\n");

    //Solicitar la opción y los números
    printf("Elige la opción a realizar: ");
    scanf("%d",&op);

    printf("Dame 2 números separados por coma: ");
    scanf("%i,%i",&n1,&n2);

    switch (op)
    {
    case 1:
        res=n1+n2;
        printf("La suma de %d y %d es: %d\n",n1,n2,res);
        break;
    case 2:
        res=n1-n2;
        printf("La resta de %d y %d es: %d\n",n1,n2,res);
        break;
    case 3:
        res=n1*n2;
        printf("La multiplación de %d y %d es: %d\n",n1,n2,res);
        break;
    case 4:
        res=n1/n2;
        printf("La división de %d y %d es: %d\n",n1,n2,res);
        break;
    default:
        printf("Opción no válida\n");
        break;
    }

    return 0;
}