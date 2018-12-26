#include <stdio.h>

//This program allow count how many words are typed.

int main(){
    int c, nl;
    
    nl=0;
    while((c = getchar())!=EOF)
    if(c == '\n')
        ++nl;
    printf("You write %d phrases.\n",nl);
    return 0;
}