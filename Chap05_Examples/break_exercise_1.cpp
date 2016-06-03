/* break_exercise_1.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   
   int a; 
   
   do {
   printf("請輸入一整數<負數結束> : ");
   scanf("%d",&a);
        if (a<0)
           break;     
        printf("%d平方根為:%f\n",a,sqrt(a));
   } while(a>=0);
   
   printf("\n\n");   
   system("pause");     
   return 0;
}        
