#include <stdio.h>

/*
Author: Madai Arteaga
email: madai.arteaga@epn.edu.ec

This program allow count how many words are typed.

Status: Finished
*/

int main(){
    int c, nl;
    
    nl=0;
    while((c = getchar())!=EOF)
    if(c == '\n')
        ++nl;
    printf("You write %d phrases.\n",nl);
    return 0;
}