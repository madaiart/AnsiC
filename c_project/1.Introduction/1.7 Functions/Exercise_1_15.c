#include <stdio.h>
#define HIGHT_TEMPERATURE 300

/*
Author: Madai Arteaga
email: madai.arteaga@epn.edu.ec

Rewrite the temperature conversion program of Section 1.2 
to use a function for conversion.

Status: Complete
*/

//Definition of functions
int celsius_to_farenheit (int celsius)
{
    int farenheit;    
    farenheit = 9/5*(celsius-32);   
    return farenheit; 
}

int celsius_to_kelvin (int celsius)
{
    int kelvin;
    kelvin = celsius + 273;
    return kelvin; 
}

//The main function
int main()
{
    int celsius;

    printf("Temperature\nC\tF\tK\n");
    for(int i = 0; i < HIGHT_TEMPERATURE; i+=20)
        printf("%d\t%d\t%d\n",i,celsius_to_farenheit(i), celsius_to_kelvin(i));
    return 0;
}

