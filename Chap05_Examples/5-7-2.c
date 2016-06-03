/*印出右斜三角數字程式*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j;
    for(i=1;i<6;i++) {
      for(j=0;j<i;j++) {
        printf("%d",i);    //印出數字 
      }
      printf("\n");    //換印下一列
    }
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}
