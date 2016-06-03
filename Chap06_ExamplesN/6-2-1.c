/* 6-2-1.c */
#include <stdio.h>
#include <stdlib.h>
int f(int,int);               
int main(void)
{
    int x,n;
    printf("計算x的n次方, 請輸入x & n:");
    scanf("%d %d",&x,&n);
    printf("%d^%d = %d\n",x,n,f(x,n));
    system("pause");     
}
int f(int x,int n)
{
    int i,k;
    k = x;
    for(i=1;i<n;i++)
      x = x*k;
    return x;
}
