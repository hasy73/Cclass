/*if_else_Exercise_1.cpp */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b;
    printf("請輸入兩個整數: ");
    scanf("%d %d", &a, &b);
    /*
        請修正程式，讓程式可以正確執行以下功能：
        從鍵盤讀取兩個整數，以較大的數為被減數或被除數
        計算及輸出：
        1. 兩數相減的結果 
        2. 相除所得的商
        3. 相除所得的餘數
    */
    
    if (a > b)
       printf("%d-%d = %d\n", a, b, a-b);  
       printf("%d/%d = %d\n", a, b, a/b);    
       printf("%d%%%d = %d\n", a, b, a%b);
          
    else  
       printf("%d-%d = %d\n", b, a, b-a);  
       printf("%d/%d = %d\n", b, a, b/a);    
       printf("%d%%%d = %d\n", b, a, b%a);   
                 
       
    
    system("pause");     
    return 0;
} 
