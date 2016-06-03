/* 季節判斷程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int month;
    printf("請輸入月份：");
    scanf("%d",&month);
    if(month >= 1 && month <=3)           //判斷是否為1月到3月
      printf("%d 月是春天\n",month);
    else if(month <=6)                     //判斷是否為4月到6月
      printf("%d 月是夏天\n",month);
    else if(month <=9)                     //判斷是否為7月到9月
      printf("%d 月是秋天\n",month);
    else if(month <=12)                    //判斷是否為10月到12月
      printf("%d 月是冬天\n",month);
    else
      printf("不合法的月份\n");
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}
