/* TwoDArray_Addr_Val.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    char carr[5][10]={"Kelly","Jason","Wilson","Lucas","James"};
    
    printf("carr: %x\n\n", carr);
    
    printf("carr[1]: %x\n", carr[1]);
    printf("carr+1: %x\n", carr+1);    
    printf("&carr[1][0]: %x\n\n", &carr[1][0]);
   
    printf("carr[0][0]: %c\n", carr[0][0]);
    system("pause");     
}
