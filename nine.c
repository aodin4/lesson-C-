#include<stdio.h>



int main() 
{
    int c, ns = 0;
        while((c = getchar()) != EOF)
        {
            (c != ' ') ? ns = 0 : ++ns;
            if(ns <= 1) { printf("%c", c); }
        }
 
    printf("\n");
    return 0;
}
