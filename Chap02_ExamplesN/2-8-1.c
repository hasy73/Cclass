/* 這是使用scanf輸入的程式範例 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    char ch;
    float j;
    printf("依序輸入 整數 字元 帶有小數的數值(值與值間用空白或Enter鍵隔開): ");
    scanf("%d %c %f",&i,&ch,&j);                      /*使用scanf函式存入變數之中 */
    printf("所輸入的整數是 %d\n",i);
    printf("所輸入的字元是 %c\n",ch);
    printf("所輸入的小數是 %f\n",j);
    system("pause");
} 

