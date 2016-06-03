/* PointerEx_2.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    char *ptr1, *ptr2;
    char ch1='M';
    char ch2='W';
    
    ptr1=&ch1;
    ptr2=&ch2;
    
    printf("ch1 = %c\n",*ptr1);
    printf("ch2 = %c\n",*ptr2);
    
    system("pause");
}
