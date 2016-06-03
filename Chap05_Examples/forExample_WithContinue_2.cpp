/* forExample_WithContinue_2.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,total=0;
    
    for(i=1;i<=10;i++){
      if (i%2)
         continue;                 
      total += i;
    }       
      
    printf("total = %d \n\n", total);  
    system("pause");     
    return 0;
}
