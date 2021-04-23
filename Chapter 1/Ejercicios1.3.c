/* This are the exercise in the section:
   1.3 The «for» statement
   
   Para hacer repeticiones se puede usar: FOR o WHILE

   while(condition)
   {

   }

   for(int i = 0; comparacion; incremento)
   {

   }
*/

/* Ejercicio 1-5
    Modificar el prorgrama de conversión de temperatura para imprimir la tabla en orden reverso, de 300 grados a 0 grados.

---PROGRAMA---
    #include <stdio.h>
    //print Fahrenheit-Celsius table
    main()
    {
        int fahr;
        for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
*/

#include <stdio.h>
//print Fahrenheit-Celsius table
int main()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
   return 0;
   
}
