/* for_exercise_2.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int i;
    int sum=0;
    for (i=10; i>5; i--)
    {
        printf("%d\n",i);
        sum+=i;
    }
    //那些i值會累加到sum中:  
    printf("sum = %d\n\n",sum);  //輸出的sum值為: 
    system("pause");     
    return 0;
}        
