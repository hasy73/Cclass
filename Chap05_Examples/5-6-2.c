/*印出左斜三角程式*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<6;i++) {
      for(j=5-i;j>0;j--) {
        printf(" ");    //先印出每一列必須的空格
      }
      for(k=0;k<i;k++) {
        printf("*");    //印出星號
      }
      printf("\n");    //換印下一列
    }
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}

