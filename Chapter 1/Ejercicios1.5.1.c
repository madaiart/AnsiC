/* This are the exercise in the section:
   1.5.1 File Copying

   char c = getchar();  -> Obtiene un caracter desde consola
   putchar(c) -> Imprime un carácter en consola

   EOF -> end-of-file    EOF is an integer defined in <stdio.h>
*/
#include <stdio.h>

/* copy input to output; 1st version*/

int main()
{
    int c;

    c = getchar();   // leer un caracter
    while (c != EOF) // mientras el caracter no sea fin de línea
    {
        putchar(c);    // presentar el caracter
        c = getchar(); // se actualiza el valor de c para volver a comparar en el while
    }
    return 0;
}

// #include <stdio.h>
// /* copy input to output; 2nd version */
// int main()
// {
//     int c;
//     while ((c = getchar()) != EOF)
//         putchar(c);
//  return 0;
// }

/* Ejercicio 1-6
   Escribir usando printf el resultado de la expression getchar() != EOF
*/

// int main()
// {
//     int c= getchar();
//     printf("%d", c!=EOF);

// }


/*  Ejercicio 1-7
    Escribir un programa que imprima el valor de EOF
*/
// int main()
// {
// printf("%d",EOF);
// }