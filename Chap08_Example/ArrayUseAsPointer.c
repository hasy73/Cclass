/* ArrayUseAsPointer.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int  *iptr, a[10]={0,1,2,3,4,5,6,7,8,9};
    
    iptr=a; 
    //printf("iptr: %x\n", iptr+1); 
    printf("a: %x\n", a+1);  
    
    //printf("iptr[1]: %d\n", *(iptr+1)); 
    printf("a[1]: %d\n", *(a+1));
    system("pause");
}
