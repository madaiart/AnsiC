#include <stdio.h>

/*
 * This is the example of function in the book
 * 
 *  the power function
 */

int power(int m, int n); // funtion prototipe

//test the power funtion
int main()
{
    int i;
    printf("^\t2\t-3\n");
    for(i = 0; i<10; ++i)
        printf("%d\t%d\t%d \n",i, power(2,i), power(-3,i));    
    return 0;    
}

/*power: raise base to n-th power n >= 0*/
int power(int base, int n)
{
    int i, p;
    p = 1;
    for(i = 1; i<=n; ++i)
        p = p * base;
    return p;
}