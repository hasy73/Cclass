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
    //����i�ȷ|�֥[��sum��:  
    printf("sum = %d\n\n",sum);  //��X��sum�Ȭ�: 
    system("pause");     
    return 0;
}        
