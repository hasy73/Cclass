/*單位轉換程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    double input;
    printf("您要轉換 1)公尺 -> 英呎 2)公斤 -> 英鎊");
    scanf("%c",&ch);         /* 輸入選擇 */
    scanf("%lf",&input);       /* 輸入欲轉換的數 */
    if(ch == '1')
      printf("%lf 公尺 = %lf 英呎\n",input,input*3.28);
    else if(ch == '2')
      printf("%lf 公斤 = %lf 英鎊\n",input,input*2.2);
    else 
      printf("沒有這個選項\n");
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
} 

