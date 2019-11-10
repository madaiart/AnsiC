//
// Created by madaicol on 11/10/19.
// These program is the solution of the exercise 2.16
//
#include <stdio.h>

int main(){
//    2.16 Write a program with two inputs as a number.
//    Get the sum, the difference, the quotient, and the remainder.
    float num1, num2;

    printf("+ * - / %%\n");

    printf("Write your first number: ");
    scanf("%f", &num1);

    printf("Write your second number: ");
    scanf("%f", &num2);

    printf("The + is %2.2f\n", num1 + num2);
    printf("The * is %2.2f\n", num1 * num2);
    printf("The - is %2.2f\n", num1 - num2);
    printf("The / is %2.2f\n", num1 / num2);
    printf("The remainder is %d\n", (int)num1 % (int)num2);


    return 0;
}
