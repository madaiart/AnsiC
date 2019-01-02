/*
Author: Madai Arteaga
email: madai.arteaga@epn.edu.ec

Write a program to print all input lines that are longer than 80 characteres.

Status: Complete
*/

#include <stdio.h>
#define MAX_CHARACTERS 500
#define LONGER_LINE 81000 // print the 100 lines that has more that 80 characteres and 100 \n 
#define CHARACTERS 20

int getline(char line[], int maxline);
int save(char to[], char from[], int current_line);

int main()
{
    int len, current_line;    
    char line[MAX_CHARACTERS];
    char longer80[LONGER_LINE];
    
    current_line = 0;
    while((len = getline(line, MAX_CHARACTERS))>0)
        if(len > CHARACTERS)
            current_line = save(longer80,line,current_line);            

    if(current_line>0)
        printf("%s",longer80);
    return 0;
}

/*Gets the position of the last character in the array*/
int getline(char line[], int maxline)
{
    int c, i;

    for(i = 0; i<maxline-1 && (c = getchar())!= EOF && c != '\n'; ++i)
        line[i]=c;
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

/* save the lines */
int save(char to[], char from[], int current_line){
    printf("\n->%d",current_line);
    int i = 0;
    while((to[current_line+i] = from[i])!='\0')
        ++i;
    to[current_line+i]='\n';
    current_line = current_line+i+1;
    printf("\t->%d\n",current_line);
    return current_line;
}



