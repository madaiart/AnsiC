#include <stdio.h>

/*
Author: Madai Arteaga
email: madai.arteaga@epn.edu.ec

Write a program to copy its input, replacing each tab by \t,esach backspece by \b
and each backslash by \\. This makes tabs and backspaces visible in
an ambigguous way.

Status: Finished, The backspace (\b) isn't captured yet because the library standatr I/O doesn't recogize all information in he input.
*/

int main(){
    int c, tempC;


    while((c = getchar())!=EOF){
        //Adding the first backslash
        tempC=c;
        if(c == '\t'  || c == '\b' ||  c == '\\')
            c = (int)92;

        //Add the next character
        if(tempC == '\t')
        putchar('t');
        if(tempC == '\b')
        putchar('b');
        if(tempC == '\\')
        putchar((int)92);

        putchar(c);
    }   
    return 0;
}