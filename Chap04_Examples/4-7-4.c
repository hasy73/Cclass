/*多段式百貨公司程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int money;
    scanf("%d",&money);        /* 輸入買了多少錢*/
    if(money > 10000)
      money = money*55/100;
    else if(money > 5000)
      money = money*6/10;
    else if(money > 2000)
      money = money*7/10;
    printf("實需付 %d \n",money);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
} 


