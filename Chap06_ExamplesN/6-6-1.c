/* main函式引數的範例 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
  int i;
  printf("argc = %d\n",argc );
  for(i=0;i<argc;i++)
    printf("%s\n",argv[i]);
system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
