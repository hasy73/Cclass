#include <stdio.h>
#include <stdlib.h>
int C(int,int);               //計算組合數
int main(void)
{
    int  n,r;
    printf("計算組合數C, 請輸入n,r:");
    scanf("%d %d",&n,&r);
    printf("C(%d,%d) = %d",n,r,C(n,r));
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
int C(int n,int r)
{
    if(n < r || r<0 )  //n必須大於r，r必須大於等於0
      return -1;
    if(n == r || r==0)     //取相同數目與取0種的方法都只有一個
      return 1;
    return C(n-1,r) + C(n-1,r-1); //組合公式
}

