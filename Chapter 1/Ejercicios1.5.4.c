/*
   This are the exercise in the section:
   1.5.4 Word Count
*/

// #include <stdio.h>
// #define IN 1  /* inside a word */
// #define OUT 0 /* outside a word */
// /* count lines, words, and characters in input */
// int main()
// {
//     int c, nl, nw, nc, state;
//     state = OUT;
//     nl = nw = nc = 0;
//     while ((c = getchar()) != EOF)
//     {
//         ++nc;
//         if (c == '\n')
//             ++nl;
//         if (c == ' ' || c == '\n' || c = '\t')
//             state = OUT;
//         else if (state == OUT)
//         {
//             state = IN;
//             ++nw;
//         }
//     }
//     printf("%d %d %d\n", nl, nw, nc);
//     return 0;
// }

/*
Ejercicio 1-11:
Probar el programa, que errores tiene?
*/

// #include <stdio.h>
// #define IN 1  /* inside a word */
// #define OUT 0 /* outside a word */
// /* count lines, words, and characters in input */
// int main()
// {
//     int c, nl, nw, nc, state;
//     state = OUT;
//     nl = nw = nc = 0;
//     while ((c = getchar()) != EOF)
//     {
//         ++nc;
//         if (c == '\n')
//             ++nl;
//         if (c == ' ' || c == '\n' || c == '\t')
//             state = OUT;
//         else if (state == OUT)
//         {
//             state = IN;
//             ++nw;
//         }
//     }
//     printf("Lineas: %d\nPalabras: %d\nCaracteres: %d\n", nl, nw, nc);
//     return 0;
// }
/*
Ejercicio 1-12:
Escribir un programa que imprima su entrada una palabra por línea.
Ejemplo:
> Hola soy un programa de ejemplo -> entrada
> Hola\nsoy\nun\nprograma\nde\nejemplo -> entrada
Hola
soy
un
programa
de
ejemplo

*/

#include <stdio.h>
int main()
{
    double c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
        printf("%c", 7);
         putchar(10);

        }
        else
        {
            putchar(c);
        }
    }
        return 0;
}
