/* PointerArithmatic.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int  *iptr, a[10]={0,1,2,3,4,5,6,7,8,9};
    
    iptr=a; 
    printf("a[0]: %d\n", *iptr);
    iptr++;
    printf("%d\n", *iptr);   //Q16:
    iptr=iptr+2;
    printf("%d\n", *iptr);   //Q17
    iptr--;
    printf("%d\n", *iptr);   //Q18
    system("pause");
}
