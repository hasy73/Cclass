/* dowhile_exercise_1.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
   //Step 1: 宣告相關的變數及給定初值
   int a ;
   //Step 2: 輸出提示訊息
   printf("請輸入一整數:");
   //Step 3: 從鍵盤讀取一整數
   scanf("%d",&a);
   //Step 4: 輸出標題
   printf("%d的因數有:",a);
   //Step 5: 以do while?圈逐一找出因數
   int i=1;
   do {
       if (a%i==0)
       printf("%d\t",i);
       i++;
   } while(a>=i);
   //例: 欲找98的因數, 用1...98當除數, 98當被除數, 可以整除98者即為98的因數 
   printf("\n\n");   
   system("pause");     
   return 0;
}        
