//購物計費程式 
#include <stdio.h>  //載入標準輸出入標頭檔  
#include <stdlib.h>
int main( )
{
  int m,a1,a2,a3,total;  //宣告5個整數變數
  scanf("%d%d%d%d",&m,&a1,&a2,&a3);  //輸入所攜錢數及商品個數
  total=a1*199+a2*23+a3*85;  //計算購買的商品總價
  if(total<=m)   //判斷是否有足夠的錢數
    printf("剩下%d元\n",m-total);  //所需錢<=擁有錢
  else 
    printf("還差%d元\n",total-m);  //所需錢 > 擁有錢
  system("pause");  //使程式暫停在執行畫面讓我們看到結果
  return 0;
} 

