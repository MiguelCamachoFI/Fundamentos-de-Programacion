#include<stdio.h>
int main()
{
    //Declarar variables
    float a,b,s,r,mu,d;
    int op,mo,x,y,n,res,i,f;
    
    //Mensaje de bienvenida
    printf("\n\n\t\t\tCalculadora\n\n");

    do
    {
        //Mostrar el menu
        printf("1) Suma\n2) Resta\n3) Multiplicación\n4) División\n5) Modulo o residuo\n6) Sumatoria de n números\n7) Factorial\n8) Salir\n");

        //Solicitar la opción
        printf("Elije una opción: ");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            printf("Elegiste Suma\n\n");
            printf("Dame 2 números seprados por espacios:");
            scanf("%f %f",&a,&b);
            s=a+b;
            printf("La suma de %f y %f es: %f \n",a,b,s);
            break;
        case 2:
            printf("Elegiste Resta\n\n");
            printf("Dame 2 números seprados por espacios:");
            scanf("%f %f",&a,&b);
            r=a-b;
            printf("La resta de %f y %f es: %F \n",a,b,r);
            break;
        case 3:
            printf("Elegiste Multiplicación\n\n");
            printf("Dame 2 números seprados por espacios:");
            scanf("%f %f",&a,&b);
            mu=a*b;
            printf("La multiplicación de %f y %f es: %f \n",a,b,mu);
            break;
        case 4:
            printf("Elegiste División\n\n");
            printf("Dame 2 números seprados por espacios:");
            scanf("%f %f",&a,&b);
            d=a/b;
            if (b==0)
                {
                    printf("la división es indeterminada\n");
                }
                else
                {
                    printf("La división de %f y %f es: %f \n",a,b,d);
                }
            break;
        case 5:
            printf("Elegiste Modulo o residuo\n\n");
            printf("Dame 2 números seprados por espacios:");
            scanf("%f %f",&a,&b);
            x=a;
            y=b;
            mo = x % y;
            printf("El módulo o residuo de %d y %d es: %d \n", x, y, mo);
            break;
        case 6:
            printf("Elegiste Sumatoria de n números\n\n");
            printf("¿Cuántos números deseas sumar?\n");
            scanf("%d",&n);
            res=0;
            for (int i = 1; i<=n; i++)
            {
                res=res+i;
            }
            printf("La suma de los primeros %d números es: %d\n",n,res);
            break;
        case 7:
            printf("Elegiste Factorial\n\n");
            f=1;
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
                    f=f*i;
                }
                
                printf("El factorial de %d es: %d\n",n,f);
            }
            break;
        case 8:
            printf("Elegiste Salir\n\n");
            break;
        default:
            printf("Opción no válida!!!\n\n");
            break;
        }

    } while (op!=8);
    printf("Gracias por usar nuestro programa :)\n");
    return 0;
}