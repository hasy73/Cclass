#include <stdio.h>    //非遞迴的方式
#include <stdlib.h>
int factorial(int);               //宣告自訂函式f
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
int factorial(int n)
{
  int i,fac=1;
  for(i=1;i<=n;i++)
    fac = fac * i;      //非遞迴方式求n!計算程式
  return fac;
}
