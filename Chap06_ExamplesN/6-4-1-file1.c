/* extern範例-6-4-1-file1.c */
#include <stdio.h>
#include <stdlib.h>
#include "6-4-1-file2.c"  //使用雙引號將file2.c檔含括進來 
int f(int);           //宣告自訂函式f
int a;                 //宣告全域變數a
int main(void)
{
    a = f(5);             //呼叫函式f並將回傳值儲存進變數a
    printf("a = %d\n",a);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
