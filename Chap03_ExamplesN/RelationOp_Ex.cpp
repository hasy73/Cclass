//RelationOp_2
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Step 1: 宣告兩個int變數 
    int a, b;
    //Step 2: 顯示提示訊息    
    printf("請輸入兩個整數, 以空白分隔兩個整數: ");
    //Step 3: 從鍵盤讀取兩個整數 
    scanf("%d %d", &a, &b);
    //Step 4: 輸出關係運算結果 
    printf("a>b : %d\n", a>b);
    printf("a<b : %d\n", a<b);
    printf("a>=b : %d\n", a>=b);
    printf("a<=b : %d\n", a<=b);
    printf("a==b : %d\n", a==b);
    printf("a!=b : %d\n", a!=b);
    system("pause");     
    return 0;
}
