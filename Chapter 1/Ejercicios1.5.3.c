/*
   This are the exercise in the section:
   1.5.3 Line Counting
*/

#include <stdio.h>
/* count lines in input */
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
    return 0;
}

/*
Ejercicio 1-8:
Escribir un programa que cuente "Espacios en blanco", "tabs", y "nuevas líneas (\n)"
*/

/*
Ejercicio 1-9:
Escribir un programa que tome la entrada y reemplace todos los espacios por uno solo.
Ejemplo:
> sdf sdfsdf      sdfdf   df dfdfds  -> entrada
  sdf sdfsdf sdfdf df dfdfds         -> salida
*/

/*
Ejercicio 1-10:
Escribir un programa que tome la entrada y reemplace tabulacion por \t, espacio por \b y slash por \\
Ejemplo:
> sdf sdfsdf      sdfdf   df dfdfds \  -> entrada
  sdf\bsdfsdf\tsdfdf\bdf\bdfdfds\\     -> salida
*/