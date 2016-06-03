/* PointerEx_3.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    char *ptr1, *ptr2;
    char ch1='a';
    char ch2='d';
    
    ptr1=&ch1;
    ptr2=&ch2;
    *ptr1=*ptr2;
    printf("ch1 = %c\n",ch1);
    printf("ch2 = %c\n",ch2);
    
    system("pause");
}
