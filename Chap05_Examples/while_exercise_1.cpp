/* while_exercise_1.c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int sum=0;
   int i=17;
   while (i%10 != 0){
        printf("%d\n",i); 
        sum+=i;
        i++;
   } //那些i值會累加到sum中 :17 18 19
   printf("sum = %d\n\n",sum); //輸出的sum值為? 54
   system("pause");     
   return 0;
}        
