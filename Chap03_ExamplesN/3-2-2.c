/* 溫度轉換程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double C,F;       //宣告兩浮點數變數
    scanf("%lf",&F);   //輸入華氏溫度
    C = (F -32)*5/9;   //使用公式轉換溫度
    printf("%lf 轉換為攝氏溫度後為 %f 度\n",F,C);
    system("pause");     //使程式暫停在執行畫面以供檢視結果
    return 0;
} 

