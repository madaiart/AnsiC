/* This are the exercise in the section:
   1.6 Functions
*/

#include <stdio.h>
int power(int m, int n);
/* test power function */
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}
/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}


/* Ejercicio 1-15
    Reescribir el programa de conversion de temperatura y convertirlo en función.
*/