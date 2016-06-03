/*if_Statement_1.cpp */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    printf("請輸入一整數: ");
    scanf("%d", &a);
    
    if (a%2 == 0)
       a=a/2;
       
    printf("a = %d\n", a);
    system("pause");     
    return 0;
} 
