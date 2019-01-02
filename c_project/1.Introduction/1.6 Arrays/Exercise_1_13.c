#include <stdio.h>
#define HIGHT_WORD 15
#define CHAR_HISTOGRAM 178
/*
Author: Madai Arteaga
email: madai.arteaga@epn.edu.ec

Write a program to print a histogram of the lenghts of words in its input.
It is easy to draw the histogram with the bars horizontal; a vertical oritentation is more challenging

Observation: the last character end of file in windows os ^Z is another character summarized to the last input word.

Status: Complete
*/

int main()
{
    int c, i, word_size;
    int lword[HIGHT_WORD];

    //Initializate the array
    for(i = 0; i < HIGHT_WORD; ++i){
        lword[i]=0;
    }

    while((c = getchar())!= EOF)
    {
        if(c != ' ' && c != '\n' && c != '\t') 
            ++word_size;
        else
        {
            ++lword[word_size];
            word_size = 0;
        }
    }
    printf("\nThe histogram of the lenghts of words are:\n");

    for(i = 0; i<HIGHT_WORD; ++i)
    {
        if (lword[i] != 0){
            printf("%d: [%d]\t", i, lword[i]);

            int histogram = 0;
            while(histogram != lword[i])
            {
                printf("%c",CHAR_HISTOGRAM);
                ++histogram;
            }
            printf("\n");
        }
    }

    printf("\nVertical histogram\n");
     
    // find the bigest number
    int bnumber = lword[0];
    for(i = 0; i<HIGHT_WORD; ++i){
        if(bnumber<lword[i])
            bnumber = lword[i];
    }

    // print blanks and char
    for(int j = 0 ; j < bnumber; ++j)
    {
        for(i = 0; i<HIGHT_WORD; ++i)
            if (lword[i] != 0)
            {        
                if(lword[i] - bnumber+j>=0)
                    printf(" %c  ",CHAR_HISTOGRAM);
                else
                    printf("    ");
            }        
        printf("\n");
    }
    
    //print the number and repetitions
    for(i = 0; i<HIGHT_WORD; ++i)
            if (lword[i] != 0)            
                printf("[%d] ",lword[i]); 
    printf("\n");         
    for(i = 0; i<HIGHT_WORD; ++i)
            if (lword[i] != 0)            
                printf(" %d  ",i); 
     printf("\n");
    return 0;
}
