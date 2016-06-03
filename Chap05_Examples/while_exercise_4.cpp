#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    for(int a=1;a<=100;a++){
    printf("%d的因數有:",a);
    
    int i=1 ; 
    while(i<=a){ 
         if(a%i==0){ 
            printf("%d\t",i); 
         } 
         i++ ;
    } }
   printf("\n\n");   
   system("pause");     
   return 0;
}        
