/* NestedIf.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, c;
    printf("叫块俱计: ");
    scanf("%d %d %d",&a,&b,&c);
    /* 絤策肈: 
       叫т块a, b, cい程       
       叫盻if糶耞Α       
    */
    if (a>b) 
       {
       if (a>c) 
          {printf("%d 程",a);} 
       else 
          {printf("%d 程",c);}
       } 
    else 
       {
       if (b>c) 
          {printf("%d 程",b);}
       else 
          {printf("%d 程",c);}
       } 
    system("pause");     
    return 0;
} 

