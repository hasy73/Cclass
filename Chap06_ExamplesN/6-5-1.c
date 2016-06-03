/* n!的計算 - recursion */
#include <stdio.h>       //遞迴的方式
#include <stdlib.h>
int factorial(int);         //宣告自訂函式f
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
system("pause");     
}
int factorial(int n)
{
  if(n==1)
    return 1;
  return n*factorial(n-1);   //此行敘述會再呼叫factorial函式一次
}
