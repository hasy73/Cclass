#include <stdio.h>
#include<stdlib.h>
int main(void)
{
  
  int i;      //宣告整數變數i
  
  //Step1輸出標題 
  printf("值\t平方值\t立方值\n");
  
  //Step 2 指定其它值給i
  i=1; 
  
  //Step 3 輸出 i, i*i, i*i*i
  printf("%d\t%d\t%d\n",i,i*i,i*i*i); 
  
  //重複Step 2 & 3 輸出其它值  
  
    
  system("pause");     //使程式暫停在執行畫面讓我們看到結果
} 

