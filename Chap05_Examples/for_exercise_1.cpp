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
    } //會輸出那些i值:
    printf("sum = %d\n\n",sum);  //輸出的sum值為: 
    system("pause");     
    return 0;
}        
