/* 變數交換程式 */
#include <stdio.h>
#include<stdlib.h>
void swap(int *,int *);
int main(void)
{
  int a=4,b=3;  //整數變數的初值設定 
  swap(&a,&b);  //將指標當作引數來傳遞進函式
  printf("a = %d  b= %d\n",a,b);
  system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
void swap(int *x,int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
