/* break_exercise_1.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   
   int a; 
   
   do {
   printf("�п�J�@���<�t�Ƶ���> : ");
   scanf("%d",&a);
        if (a<0)
           break;     
        printf("%d����ڬ�:%f\n",a,sqrt(a));
   } while(a>=0);
   
   printf("\n\n");   
   system("pause");     
   return 0;
}        
