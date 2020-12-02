#include<stdio.h>
#define PI 3.141592
int main()
{
    //Mensaje de bienvenida
    printf("\n\n\t\t\tBienvenidos a nuestra calculadora :)'n\n");

    //Variables a utilizar
    int op,l1,l2,l3,l4,a,p,b,h,r;
    
    //Mostrar menú
    printf("1) Tríangulo\n2) Círculo\n3) Rectángulo\n");

    //Solicitar la opción y los números
    printf("Elige la opción a realizar: ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("Ingrese los valores de los lados del tríangulo con comas: \n");
        scanf("%i,%i,%i",&l1,&l2,&l3);
        p=l1+l2+l3;
        printf("El perímetro de tríangulo es: %d\n",p);
        printf("Ingrese los valores de la base y la altura del tríangulo\n");
        scanf("%i,%i",&b,&h);
        a=(b*h/2);
        printf("El área del tríangulo es: %d\n",a);
        break;
    case 2:
        printf("Ingrese el radio del círculo: \n");
        scanf("%i",&r);
        p=2*PI*r;
        printf("El perímetro de círculo es: %d\n",p);
        a=PI*r*r;
        printf("El área del círculo es: %d\n",a);
        break;
    case 3:
        printf("Ingrese los valores de la base y la altura del rectángulo: \n");
        scanf("%i,%i",&b,&h);
        p=2*b+2*h;
        printf("El perímetro de rectangulo es: %d\n",p);
        a=b*h;
        printf("El área del rectángulo es: %d\n",a);
        break;
    default:
        printf("Opción no válida\n");
        break;
    }

    return 0;
}