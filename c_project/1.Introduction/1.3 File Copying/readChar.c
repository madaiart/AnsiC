#include <stdio.h>

// These program reads characteres while is not EOF End of File in 
// windows this character is ASCCI number >> Ctrl + Z <<
// The argument c = getchar() != EOF is equivalent to c = (getchar() != EOF)
// for that reason we need group the argument like (c = getchar()) != EOF


int main(){

    int c;
    
    while((c = getchar())!= EOF)
        putchar(c);            

    printf("'\nGood bye  EOF = %d\n",EOF);

    return 0;
}


