/* VarScope_2.c */
#include <stdio.h>
#include <stdlib.h>
int f(int,int);               
int main(void)
{
    int i;
    for (i=1; i <= 3 ; i++){
        printf("%d\t",i);
    }    
    printf("%d\t",i);
    system("pause");     
}
