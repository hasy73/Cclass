/*�L�X���פT���{��*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<6;i++) {
      for(j=5-i;j>0;j--) {
        printf(" ");    //���L�X�C�@�C�������Ů�
      }
      for(k=0;k<i;k++) {
        printf("*");    //�L�X�P��
      }
      printf("\n");    //���L�U�@�C
    }
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}

