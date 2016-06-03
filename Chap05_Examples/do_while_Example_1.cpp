/* do_while_Example_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    
    i=0;
    do {
      printf("%d",i);     
      i++;
    }  while(i<5);
    
    printf("\n\n");  
    system("pause");     
    return 0;
}
