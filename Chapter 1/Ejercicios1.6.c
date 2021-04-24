/* This are the exercise in the section:
   1.6 Arrays

   A continuacion se presenta un programa para contar el número de ocurrencias de cada dígito.
   Además se hace uso de 
*/

#include <stdio.h>
/* count digits, white space, others */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
           nwhite, nother);
    return 0;
}

/* Ejercicio 1-13
   Escribir un programa para imprimir un histograma de los tamaños de palabras.
   Probar realizar el histograma horizontal y vertical.
   Ejemplo:
   hola:    $$$$
   sapallo: $$$$$$$
   pepas:   $$$$$

*/




/* Ejercicio 1-14
    Escribir un programa para imprimir el histograma de frequencias
    de cada uno de las letras de entrada. 
*/