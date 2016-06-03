/*4-2-1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int money;
    scanf("%d",&money);                    
    if(money > 2000)
      money = money*7/10;
    printf("¹ê»Ý¥I %d \n",money);
    system("pause");     
    return 0;
} 

