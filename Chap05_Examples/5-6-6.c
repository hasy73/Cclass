/*印出1~100之間之質數*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    for(i=2;i<101;i++) {
      int j,flag=1;
      for(j=2;j<i;j++) {
        if(!(i%j)) flag = 0;
      }
      if(flag)
        printf("%2d 是質數 ",i);
    }
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0;
}
