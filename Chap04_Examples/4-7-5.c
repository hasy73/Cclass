/*字元判斷程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z')
      printf("輸入字元為小寫字母\n");
    if(ch >= 'A' && ch <= 'Z')
      printf("輸入字元為大寫字母\n");
    if(ch >= '0' && ch <='9')
      printf("輸入字元為阿拉伯數字\n");
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
} 


