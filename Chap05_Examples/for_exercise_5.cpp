/* for_exercise_5.c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a ;
    int n=0 ;
    for (a=1;a<200;a++)
    { 
    if (a%11==0)
      {
      printf("%d\t",a);
      n++;
      if (n%5==0)
         printf("\n");
         }
    }
    system("pause");     
    return 0;
}        
