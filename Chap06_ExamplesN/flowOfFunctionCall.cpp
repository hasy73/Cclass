/* flowOfFunctionCall.c */
#include <stdio.h>
#include <stdlib.h>
void funcA();
void funcB();               
void funcC(); 
int main(void)
{
    printf("Msg1 in main.\n");
    printf("Msg2 in main.\n");
    funcA();
    printf("Msg3 in main.\n");
    system("pause");
}
void funcA()
{
    printf("Msg1 in funcA.\n"); 
    funcB();
    printf("Msg2 in funcA.\n"); 
}     
void funcB()
{
    printf("Msg1 in funcB.\n"); 
    funcC();     
}     
void funcC()
{
    printf("Msg1 in funcC.\n");  
    printf("Msg2 in funcC.\n"); 
}     
