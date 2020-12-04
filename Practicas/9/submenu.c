#include<stdio.h>
int main()
{
    //Declarar variables
    int op,op2;
    
    //Mensaje de bienvenida
    printf("\n\n\t\t\tMenú de figuras :)\n\n");

    do
    {
        //Mostrar el menu
        printf("1) Triángulo\n2) Rectángulo\n3) Círculo\n4) Salir\n");

        //Solicitar la opción
        printf("Elije una opción: ");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            printf("Elegiste triángulo\n\n");
            do
            {
                printf("1) área\n2) perímetro\n3) Salir\n");
                printf("Elije una opción: ");
                scanf("%d",&op2);
                switch (op2)
                {
                case 1:
                    printf("Elegiste el área\n\n");
                    break;
                case 2:
                    printf("Elegiste el perímetro\n\n");
                    break;
                case 3:
                    printf("Elegiste salir\n\n");
                    break;
                default:
                    printf("Opción no válida\n");
                    break;
                }
            } while (op2!=3);
            
            break;
        case 2:
            printf("Elegiste rectángulo\n\n");
            break;
        case 3:
            printf("Elegiste círculo\n\n");
            break;
        case 4:
            printf("Elegiste tríangulo\n\n");
            break;
        default:
            printf("Opción no válida!!!\n\n");
            break;
        }

    } while (op!=4);
    printf("Gracias por usar nuestro programa :)\n");
    return 0;
}