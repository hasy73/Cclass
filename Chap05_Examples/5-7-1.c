/*完全數尋找程式*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,check=0;
    for(i=1;i<10000;i++) {
      check =0;
      for(j=1;j<i;j++) 
        if(!(i%j)) check = check +j;
      if(check == i) 
        printf("%d 是完全數\n",i);
    }
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
    return 0; 
}
