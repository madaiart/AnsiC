#include <stdio.h>

#define IN 1  //Inside a word
#define OUT 0 //outsude a word

//Count lines, words, and characters in input

int main(){
    int c, nl, nw, nc, state; // lines, words, characters

    state = OUT;
    nw = nc = 0;

    while((c=getchar())!=EOF){
        ++nc;
        if(c == '\n')
        ++nl;
        if(c == ' '|| c == '\n' || c == '\t' )
        state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }

    printf("\nnl = %d\tnw = %d\tnc = %d", nl, nw, nc);
    return 0;
}