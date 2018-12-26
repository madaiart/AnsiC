#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Changes Farenheit to Celsius table
    int farh, cels, kelvin;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    // Inicializate variable
    farh = lower;

    printf("F\t\tC\t\tK\n\n");
    while(upper >= farh){
        // Formula for change celsius to farenheit
        cels = 5*(farh - 32)/9;
        // Formula for change celsius to kelvin
        kelvin = 273 + cels;
        // Print text
        printf("%d\t\t%d\t\t%d\n",farh,cels,kelvin);
        // Update celsius temperature
        farh+=step;      
    }    

        //  printf("\n\t***** Press key for end this program! ****\n");
        // char end = getchar();
    return 0;
}