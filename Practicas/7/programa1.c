#include<stdio.h>
int main()
{
    //Caracteres
    char c = 'm';
    printf("Caracter: %c \n",c);
    printf("Caracter en decimal: %d \n",c);
    printf("Caracter en decimal: %i \n",c);
    printf("Caracter en octal: %o \n",c);
    printf("Caracter en hexadecimal: %x \n",c);

    //Números enteros
    short ec = 3000;
    printf("Número entero corto: %i \n",ec);
    printf("Número entero corto: %d \n",ec);
    printf("Número entero corto en octal: %o \n",ec);
    printf("Número entero corto en hexadecimal: %x \n",ec);
    int ec2= -10000;
    printf("Número entero corto: %i \n",ec2);

    //Números enteros largos
    signed long el=9999999;
    printf("Número entero largo: %ld \n",el);
    printf("Número entero largo: %li \n",el);

    //Números reales cortos
    float rc = 10.143546;
    printf("Número real corto: %f \n",rc);
    printf("Número real corto: %e \n",rc);
    printf("Número real corto: %g \n",rc);

    //Números reales largos
    double rl=2.2017021401121993;
    printf("Número real largo: %lf \n",rl);
    printf("Número real largo: %.10lf \n",rl);

    return c;
}