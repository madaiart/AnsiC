#include <stdio.h>

/*
Autor: Madai Arteaga
email: madai.artega@eepn.edu.ec

Write a program that prints its input one word perr line.

Status: Finish
*/

int main(){
    int c;

    while((c=getchar())!= EOF){
        if(c == 32)
        c = '\n';
        putchar(c);
    }
    return 0;
}