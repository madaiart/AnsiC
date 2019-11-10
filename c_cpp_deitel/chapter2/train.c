//
// Created by madaicol on 11/9/19.
//
#include <stdio.h>
int main(){
//    Variables
    int num1, num2, resultado;

    printf("Adding numbers\n");

    printf("Input the fist number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("The result is: %d\n", resultado);

    printf("\nThe relationships are:\n");
    if(num1 == num2){printf("The %d = %d number\n", num1, num2);}
    if(num1 > num2){printf("The %d > %d number\n", num1, num2);}
    if(num1 < num2){printf("The %d < %d number\n", num1, num2);}
    if(num1 != num2){printf("The %d != %d number\n", num1, num2);}
    if(num1 >= num2){printf("The %d >= %d number\n", num1, num2);}
    if(num1 <= num2){printf("The %d <= %d number\n", num1, num2);}

    return 0;
}