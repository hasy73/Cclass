/* PointerUseAsArray.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int  *iptr, a[10]={0,1,2,3,4,5,6,7,8,9};
    
    iptr=a; 
    printf("iptr: %x\n", iptr+0); 
    //printf("a: %x\n", a+0);
    
    printf("iptr[0]: %d\n", iptr[0]); 
    //printf("a[0]: %d\n", a[0]);
    system("pause");
}
