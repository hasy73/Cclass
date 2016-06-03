/* register 範例 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    register int i;         //宣告register變數i
    for(i=0;i<10000;i++)
      printf("%d ",i);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
