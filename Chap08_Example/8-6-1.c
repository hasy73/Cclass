/* 函式指標程式 */
#include <stdio.h>
#include<stdlib.h>
int add(int,int);
int main(void)
{
  int ans,(*p) (int x,int y); //宣告函式指標p，具有兩個整數引數
  p = add;             //將p指向函式add
  ans = (*p) (3,4);      //間接呼叫add函式
  printf("%d\n",ans);
system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
int add(int x,int y)
{
  return x+y;
}
