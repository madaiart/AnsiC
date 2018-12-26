#include <stdio.h>

//This program allow count how many words are typed.

int main(){
    long nc;

    nc=0;
    while(getchar()!=EOF)
    ++nc;
    printf("You typed %ld\n keys on the keyboard",nc);
    return 0;
}