// Training with functions

// A continuación se presenta un ejemplo de
//  una función que imprime un texto y el mismo ejemplo sin función

// #include <stdio.h>
// int main()
// {
//     printf("Este es un texto");
//     return 0;
// }

// #include <stdio.h>
// void imprimir(){
//     printf("Este es un texto");
// }

// int main()
// {
//     imprimir();
//     return 0;
// }

// Ahora una función (tiene un error) que devuelve un número aleatorio entre 2 numeros

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     srand(time(NULL));
//     int menor = 4;
//     int mayor = 10;
//     int numero = rand() % (mayor - menor + 1) + menor;
//     printf("Numero aleatorio: %d", numero);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int aleatorio(int menor, int mayor){
//       srand(time(NULL));
//       int numero = rand () % (mayor-menor+1) + menor;
//       return numero;
// }
// int main(int argc, char const *argv[])
// {
//     int numero = aleatorio(4,10);
//     printf("Numero aleatorio: %d", numero);
//     return 0;
// }

// // Ahora pasar a funcion el siguiente codigo
// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     float x =2.2;
//     float y= 2.2;
//     if (x > y)
//     {
//         printf("%.2f>%.2f", x, y);
//     }
//     else if (x < y)
//     {
//         printf("%.2f<%.2f", x, y);
//     }
//     else if (x == y)
//     {
//         printf("%.2f==%.2f", x, y);
//     }
//     return 0;
// }

// #include<stdio.h>
// void comparar(int a, int b)
// {
// int x=a, y=b;
//      if (x>y)
//      {
//          printf("%d>%d", x,y);
//      }
//     else if (x<y)
//     {
//       printf("%d<%d", x,y);
//     }

//     else if (x==y)
//     {
//         printf("%d==%d",x,y);
//     }

// }

// int main ()
// {
//     int x=5;
//     int y=3;
//     comparar(x,y);
//     return 0;

// }

#include <stdio.h>
// Crear dos funciones una que imprima "El gato tiene X! pulgas"
// -> Donde X es un número ingresado por el usuario.
// La otra función calcula el factorial del número ingresado y regresa un entero
// Ejemplo:
// Ingrese numero de pulgas: 5
// **función calcular factorial devuelve 15 (5! = 5x4x3x2x1)
// **funcion imprimir no devuelve nada pero imprime "El gato tiene 15 pulgas"
int pulgasFactorial(int ingreso)
{
    int resultado = 1;
    if (ingreso > 0)
    {
        for (int i = ingreso; i > 0; i--)
        {
            resultado = resultado * i;
        }
    }

    if (ingreso == 0)
    {
        resultado = 1;
    }
    return resultado;
}

void imprimirGato(int llegadaP)
{
    printf("El numero de pulgas es: %d\n", llegadaP);
}

int main()
{
    // int numeroP;
    // printf("Ingrese el numero de pulgas: ");
    // scanf("%d", &numeroP);

    // for (int i = 0; i < numeroP; i++)
    // {
    //     int factorialP = pulgasFactorial(i);
    //     imprimirGato(factorialP);
    // }

    for (int i = 1; i < 10; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("* ");
        }
         printf("\n");
    }

   
}
