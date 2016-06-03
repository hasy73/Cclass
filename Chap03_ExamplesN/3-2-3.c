/*餘數運算子的練習，計算出除以7的餘數*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
    printf("請輸入一個整數..."); 
    scanf("%d", &num);
    printf("%d %% 7 = %d", num, num%7);
    system("pause");
    return 0;
} 
