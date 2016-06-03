/* Array_Addr_Val.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int arr[3]={0,1,2};
    
    printf("arr: %x\n",arr);  
    printf("arr+0: %x\n",arr+0);
    printf("&arr[0]: %x\n\n",&arr[0]);
    
    printf("arr+1: %x\n", arr+1);
    printf("&arr[1]: %x\n\n", &arr[1]);
    
    printf("arr+2: %x\n", arr+2);
    printf("&arr[2]: %x\n\n", &arr[2]);
    
    printf("arr[0]: %d\n", arr[0]);
    printf("arr[1]: %d\n", arr[1]);
    printf("arr[2]: %d\n\n", arr[2]);
    system("pause");     
}
