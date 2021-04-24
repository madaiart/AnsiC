/*
   This are the exercise in the section:
   1.5.3 Line Counting
*/

// #include <stdio.h>
// /* count lines in input */
// int main()
// {
//     int c, nl;
//     nl = 0;
//     while ((c = getchar()) != EOF)
//         if (c == '\n')
//             ++nl;
//     printf("%d\n", nl);
//     return 0;
// }

/*
Ejercicio 1-8:
Escribir un programa que cuente "Espacios en blanco", "tabs", y "nuevas líneas (\n)"
*/
// #include <stdio.h>
// int main()
// {
//   double c, tabular, espacios, lineas;

//   espacios = 0;
//   lineas = 0;
//   tabular = 0;
//   while ((c = getchar()) != EOF)
//   {
//     if (c == '\t')
//     {
//       tabular++;
//     }
//     if (c == ' ')
//     {
//       espacios++;
//     }
//     if (c == '\n')
//     {
//       lineas++;
//     }
//   }
//   printf("Numero de tabular = %.1f\n", tabular);
//   printf("Numero de espacios = %.1f\n", espacios);
//   printf("Numero de lineas %.1f\n", lineas);
//   return 0;
// }
/*
Ejercicio 1-9:
Escribir un programa que tome la entrada y reemplace todos los espacios por uno solo.
Ejemplo:
> sdf sdfsdf      sdfdf   df dfdfds  -> entrada
  sdf sdfsdf sdfdf df dfdfds         -> salida
*/
// #include <stdio.h>
// int main()
// {
//   int c, c1;

//   while ((c = getchar()) != EOF)
//   {
//     if (c == ' ' && c1 == ' ')
//     {
//     }
//     else
//     {
//       c1 = c;
//       putchar(c);
//     }
//   }

//   return 0;
// }
// VER 2
// #include <stdio.h>
// int main()
// {
//   int c, c1;

//   while ((c = getchar()) != EOF)
//   {
//     if (c != ' ' || c1 != ' ')
//     {
//       c1 = c;
//       putchar(c);
//     }
//   }

//   return 0;
// }
/*
Ejercicio 1-10:
Escribir un programa que tome la entrada y reemplace tabulacion por \t, espacio por \b y slash por \\
Ejemplo:
> sdf sdfsdf      sdfdf   df dfdfds \  -> entrada
  sdf\bsdfsdf\tsdfdf\bdf\bdfdfds\\     -> salida
*/

#include <stdio.h>
int main ()
{
  double c;
  while ((c= getchar())!=EOF)
  {
    if (c == '\t')
    {
      putchar('\\');
      putchar('t');
    }
    else if (c== ' ')
    {
      putchar('\\');
      putchar('b');
    }
    else if (c== '\\')
    {
      putchar('\\');
      putchar('\\');
    }
    else{
      putchar(c);
    }
    
  }
   return 0;
}