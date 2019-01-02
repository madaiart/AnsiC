#include <stdio.h>
#define MAX_CHARACTERS 125 
#define CHAR_HISTOGRAM 178
/*
Author: Madai Arteaga
email: madai.arteaga@epn.edu.ec

Write a program to print a histogram od the frequencies of different characteres in its input

Observation: the last character end of file in windows os ^Z is another character summarized to the last input word.

Status: Complete
*/

int main()
{
    int c, i;
    int nchar[MAX_CHARACTERS];

    //Initializate the array
    for(i = 0; i < MAX_CHARACTERS; ++i){
        nchar[i]=0;
    }

    while((c = getchar())!= EOF)
    {
        //loop ascci
        for(i = 0; i<MAX_CHARACTERS; ++i)
            if(c == i)
                ++nchar[c];
        
    }
    printf("\nThe histogram of the repeated characters are:\n");

    for(i = 0; i<MAX_CHARACTERS; ++i)
    {
        if (nchar[i] != 0){
            printf("%c: [%d]\t", i, nchar[i]);

            int histogram = 0;
            while(histogram != nchar[i])
            {
                printf("%c",CHAR_HISTOGRAM);
                ++histogram;
            }
            printf("\n");
        }
    }

    printf("\nVertical histogram\n");
     
    // find the bigest number
    int bnumber = nchar[0];
    for(i = 0; i<MAX_CHARACTERS; ++i){
        if(bnumber<nchar[i])
            bnumber = nchar[i];
    }

    // print blanks and char
    for(int j = 0 ; j < bnumber; ++j)
    {
        for(i = 0; i<MAX_CHARACTERS; ++i)
            if (nchar[i] != 0)
            {        
                if(nchar[i] - bnumber+j>=0)
                    printf(" %c  ",CHAR_HISTOGRAM);
                else
                    printf("    ");
            }        
        printf("\n");
    }
    
    //print the number and repetitions
    for(i = 0; i<MAX_CHARACTERS; ++i)
            if (nchar[i] != 0)            
                printf("[%d] ",nchar[i]); 
    printf("\n");         
    for(i = 0; i<MAX_CHARACTERS; ++i)
            if (nchar[i] != 0 && i > 10)            
                printf(" %c  ",i);
            else if (nchar[i] != 0)
                printf("(*) ",i);
     printf("\n");
    return 0;
}
