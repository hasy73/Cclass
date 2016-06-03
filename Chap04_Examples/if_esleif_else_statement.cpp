/* if_esleif_else_statement_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    printf("請輸入一個整數： ");
    scanf("%d",&a);
    
    if(a>0)
        printf("a is positive\n");
    else if (a==0)
        printf("a is zero\n");
    else
        printf("a is negative\n");

    system("pause");     
} 

