#include <stdio.h>
/*
 Este programa ejemplifica el manejo de operaciones relacionales y los
 operadores lógicos. También muestra la manera de incrementar o decrementar
 una variable y la diferencia entre hacerlo antes (pre) o después (pos).
*/
int main (){
 int num1, num2, res;
 char c1, c2;
 double equis = 5.5;
 num1 = 7;
 num2 = 15;
 c1 = 'h';
 c2 = 'H';

 printf("Expresiones de relación\n");
 printf("¿ num1 es menor a num2 ? -> \t%d\n",num1<num2);
 printf("¿ c1 es igual a c2 ? -> \t%d\n",c1==c2);
 printf("¿ c1 es diferente a c2 ? -> \t%d\n",c1!=c2);

 printf("\nExpresiones lógicas\n");
 printf("¿ num1 es menor a num2 Y c1 es igual a 'h' ? -> \t%d\n",
 num1<num2 && c1 == 'h');
 printf("¿ c1 es igual a 's' O c2 es igual a 'H' ? -> \t%d\n",
 c1 == 's' || c2 == 'H');
 printf("¿ c1 es igual a 's' O c2 es igual a 'S' ? -> \t%d\n",
 c1 == 's' || c2 == 'S');

 printf("\nIncrementos y decrementos\n");
 printf("num1++ -> \t%d\n",num1++);
 printf("--num1 -> \t%d\n",--num1);
 printf("++equis -> \t%lf\n",++equis);

 return 0;
}