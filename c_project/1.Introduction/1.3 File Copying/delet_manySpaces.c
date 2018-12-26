#include <stdio.h>

/*
Excercise 1-9. Write a program to copy its inptu to its output, replacing
each string of one or more blancks by a single blank
*/

int main(){
    int c, verifySpace = 0;    

    while((c = getchar()) != EOF){

        //verify if is more than 2 spaces
        if(c == (int)32)
            ++verifySpace;
        else
            verifySpace = 0;

        //deleting the repeted spaces
        if(verifySpace >= 2)
            for(int i = 0; i <=  verifySpace; ++i)
                c = (int)127;            
        

        putchar(c);
    }

    return 0;
}