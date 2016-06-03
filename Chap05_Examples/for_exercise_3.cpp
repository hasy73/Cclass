/* for_exercise_3.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int i;
    int sum=0;
    for (i = 99; i >= 0; i -= 11)
    {
        printf("%5d", i);
    }//¿é¥Xµ²ªG:   99   88   77   66   55   44   33   22   11    0 
    printf("\n\n");   
    system("pause");     
    return 0;
}        
