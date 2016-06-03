/* 這是使用scanf輸入的程式範例 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    /*
      題目: 從鍵盤讀入一個正整數並輸出該數的平方根及平方值 
    */
  
    //step 1: 宣告變數
    int a;
    //step 2: 從鍵盤讀取數值
    printf("請輸入一欲求平方根與平方值之數: ");
    scanf("%d",&a);
    //step 3: 計算並輸出 
    printf("%d的平方根與平方值分別為:  %f  和  %d\n",a,sqrt(a),a*a);
    system("pause");
} 

