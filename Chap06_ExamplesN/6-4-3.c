/* static的範例 */
#include <stdio.h>
#include <stdlib.h>
int f(void);               //宣告自訂函式f
int main(void)
{
    int i;
    for(i=1;i<5;i++)
      printf("x=%d\n",f( ));
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
int f(void)
{
    static int x=0;    //加上static修飾字
    return x++;
}
