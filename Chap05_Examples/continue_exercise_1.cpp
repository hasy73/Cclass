/* continue_exercise_1.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
  int a,i;
  a=0;
  for (i=1;i<=200;i++){
     if (i%11!=0)
        continue;
     printf("%d\t",i);
     a++;
     
     if (a%5==0){
        printf("\n");
        }
     }
   system("pause");     
   return 0;
}        
