#include <stdio.h>
/*
 Este programa crea un apuntador de tipo carácter.
*/
int main () {
    char *ap, c = 'a';
    ap = &c;

    printf("Carácter: %c\n",*ap);
    printf("Código ASCII: %d\n",*ap);
    printf("Dirección de memoria: %p\n",&ap);

    return 0;
}