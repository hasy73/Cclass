/*�L�X�k�פT���Ʀr�{��*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j;
    for(i=1;i<6;i++) {
      for(j=0;j<i;j++) {
        printf("%d",i);    //�L�X�Ʀr 
      }
      printf("\n");    //���L�U�@�C
    }
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}
