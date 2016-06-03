/* forExample_WithContinue.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    
    for(i=1;i<=10;i++){
      if (i%3 == 0)
         continue;                 
      printf("%d  ",i);
    }       
      
    printf("\n\n");  
    system("pause");     
    return 0;
}
