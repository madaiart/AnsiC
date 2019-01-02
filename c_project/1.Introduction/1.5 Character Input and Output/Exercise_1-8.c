#include <stdio.h>

/*
Author: Madai Arteaga
email: madai.arteaga@epn.edu.ec

This program recognize how many new lines, tabs, and blank spaces are typed in a text
until the EOF character (Crtl + Z) are pressed.
Excercise 1-8. Write a program to count blanks, tabs, and newlines.

STATUS: Finished.
*/

int main(){
    int nl, t, b = 0;
    int c;

    while ((c = getchar()) != EOF){
        if(c == '\n') // Line feed = (int)10
        ++nl;
        if(c == '\t') // Horizontal Tab = (int)9
        ++t;
        if(c == (int)32) // space
        ++b;        
    }

    printf("\nSummary\n");
    printf("Line Feeds = %d\n", nl);
    printf("Horizontal Tabs = %d\n",t);
    printf("Spaces = %d\n", b);

    return 0;
}