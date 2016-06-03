#include <stdio.h>
#include <stdlib.h>
int f(int);               //計算費氏數列
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("f(%d) = %d\n",n,f(n));
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
int f(int n)
{
    if(n==1 || n==2)
        return 1;
    return f(n-1) + f(n-2);
}

