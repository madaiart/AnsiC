/* This are the exercises in the section:
   1.2 Variables and Arithmetic Expressions

   printf() puede asignar espacio de memoria y forma de impresión diferente para números.
   Por ejemplo:
        %d      Imprime un decimal entero.
        %6d     Imprime un decimal entero con 6 dígitos.
        %f      Imprime un punto flotante (decimal).
        %6f     Imprime un punto flotante con 6 dígitos.
        %.2f    Imprime un punto flotante con 2 dígitos-decimales después del punto.
        %6.2f   Imprime un punto flotante con 6 dígitos y con 2 digitos-decimales después del punto.
    
    Otras opciones son: %o para octales, %x para hexadecimales, %c para caracter, %s cadena de caracteres, y %% para si mismo.
*/ 



/* Ejercicio 1-3
   Modificar la conversión de la temperatura del programa para imprimir una cabecera sobre la tabla.
   Por ejemplo:
                       °F        °C
   0    -17.8           0       -17.8
   20   -6.7            20      -6.7

---PROGRAMA DE CONVERSIÓN DE TEMPERATURA---

   main()
{
    int fahr, celsius;
    int minimo, maximo, salto;

    minimo = 0; // valor mínimo de la escala de temperatura
    maximo = 300; // valor máximo de la escala de temperatura
    salto = 20;  // tamaño del salto

    fahr = lower;
    while (fahr <= maximo){
        celsius = 5 * (fahr-32)/9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
*/ 




/* Ejercicio 1-4
   Escribir un programa que imprima una tabla de conversión entre Celsius, Fahrenheit y Kelvin.
*/

//--> Comentar código anterior y escribir código aquí