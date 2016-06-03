/*印出雙斜三角程式*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    for(i=0;i<5;i++) {
      int j,k,m;
      for(j=4-i;j>0;j--)
        printf(" ");
      for(k=0;k<2*i+1;k++)
        printf("*");
      printf("\n");
    }
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}

