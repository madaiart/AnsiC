/*
   This are the exercise in the section:
   1.5.2 Character Counting
*/

/*
El operador ++ significa incremento por uno. Similar -- significa decremento
Los operadores pueden ir como prefijo o post fijo
Ejemplo:
n++  => n = n + 1
++n  => n = n + 1
*/

#include <stdio.h>
/* count characters in input; 1st version */
int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

    return 0;
}

// #include <stdio.h>
// /* count characters in input; 2nd version */
// int main()
// {
//     double nc;
//     for (nc = 0; gechar() != EOF; ++nc)
//         ;
//     printf("%.0f\n", nc);
//}