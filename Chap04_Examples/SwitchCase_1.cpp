/* 將Line 9 ~ Line 18的判斷式以switch-case改寫 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int month;
    printf("請輸入月份：");
    scanf("%d",&month);
    switch(month) 
    {
      case 1 :
      case 2 :
      case 3 : 
            printf("%d 月是春天\n",month);
            break;
      case 4 :
      case 5 :
      case 6 : 
            printf("%d 月是夏天\n",month);
            break;
      case 7 :
      case 8 :
      case 9 :           
            printf("%d 月是秋天\n",month);
            break;
      case 10 :
      case 11 :
      case 12 :           
            printf("%d 月是冬天\n",month);
            break;
      default:
            printf("不合法的月份\n");    
    }     
    /*if(month >= 1 && month <=3)           
      printf("%d 月是春天\n",month);
    else if(month <=6)                     
      printf("%d 月是夏天\n",month);
    else if(month <=9)                     
      printf("%d 月是秋天\n",month);
    else if(month <=12)                    
      printf("%d 月是冬天\n",month);
    else
      printf("不合法的月份\n");*/ 
      
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}
