/*if_Statement_2.cpp */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b=0,c=0;
    printf("�п�J�@���: ");
    scanf("%d", &a);
    
    if (a>=10 && a<=99){
       b=a/10;
       c=a%10;              
    }            
       
    printf("a = %d\tb= %d\tc = %d\n", a,b,c);
    system("pause");     
    return 0;
} 

