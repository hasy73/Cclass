/*99乘法表*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j;
    for(i=1;i<10;i++) {    //外迴圈，將被乘數每次遞增1
      for(j=1;j<10;j++)    //內迴圈，將乘數每次遞增1
        printf("%2d*%2d=%2d",i,j,i*j);  //計算並印出99乘法表的值
      printf("\n");  //印完一列後換行
    }
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}
