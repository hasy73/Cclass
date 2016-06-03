/* 簡單的加減運算程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;    //宣告整數變數a和整數變數b
    scanf("%d %d",&a,&b);      //讀入整數變數a和b
    printf("a + b = %d\n",a+b);    //印出相加的結果
    printf("a - b = %d\n",a-b);    //印出相減的結果
    system("pause");     //使程式暫停在執行畫面以供檢視結果
    return 0;
}

