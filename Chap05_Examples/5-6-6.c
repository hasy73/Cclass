/*�L�X1~100���������*/
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
        printf("%2d �O��� ",i);
    }
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}
