/* for_exercise_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i=0;
    int sum=0;
    for (i=0; i<40; i++)
    {
        if (i%10 == 0){
            printf("%d\n",i);         
            sum+=i;
        }    
    } //�|��X����i��:
    printf("sum = %d\n\n",sum);  //��X��sum�Ȭ�: 
    system("pause");     
    return 0;
}        
